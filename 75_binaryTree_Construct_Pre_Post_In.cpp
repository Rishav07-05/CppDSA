#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return nullptr;
    }
    cout << "Enter the data in the left: " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data in the right: " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

int findPos(int in[], int element, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (in[i] == element)
        {
            return i;
        }
    }
    return -1;
}

node *solve(int in[], int pre[], int &preOrderIdx, int inOrderStart, int inOrderEnd, int n)
{
    // base case
    if (preOrderIdx >= n || inOrderStart > inOrderEnd)
    {
        return nullptr;
    }
    int element = pre[preOrderIdx++];
    node *root = new node(element);
    int position = findPos(in, element, n);
    root->left = solve(in, pre, preOrderIdx, inOrderStart, position - 1, n);
    root->right = solve(in, pre, preOrderIdx, position + 1, inOrderEnd, n);
}

node *constructPreIn(int in[], int pre[], int n)
{
    int preOrderIdx = 0;
    node *ans = solve(in, pre, preOrderIdx, 0, n - 1, n);
    return ans;
}

void postOrderTraversal(node *root)
{
    if (root)
    {
        cout << root->data << " ";
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
    }
}

int main()
{
    
    node *root = nullptr;
    root = buildTree(root);

    int in[] = {4, 2, 5, 1, 6, 3, 7};
    int pre[] = {1, 2, 4, 5, 3, 6, 7};
    int n = sizeof(in) / sizeof(in[0]);
    node *constructedTree = constructPreIn(in, pre, n);

    cout << "postOrder traversal of the constructed from Preorder and postOrder: ";
    postOrderTraversal(constructedTree);
    cout << endl;
}