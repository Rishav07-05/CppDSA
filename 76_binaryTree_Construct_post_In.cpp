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
    cout << "Enter the data ";
    int data;
    cin >> data;
    if (data == -1)
    {
        return nullptr;
    }
    root = new node(data);
    cout << "Enter the data in left: " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data in right: " << data << endl;
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

node *solve(int in[], int post[], int &preOrderIdx, int inOrderStart, int inOrderEnd, int n)
{
    // base case
    if (preOrderIdx < 0 || inOrderStart > inOrderEnd)
    {
        return nullptr;
    }
    int element = post[preOrderIdx--];
    node *root = new node(element);
    int position = findPos(in, element, n);
    root->left = solve(in, post, preOrderIdx, inOrderStart, position - 1, n);
    root->right = solve(in, post, preOrderIdx, position + 1, inOrderEnd, n);
}

node *constructPreIn(int in[], int post[], int n)
{
    int postOrderIdx = n - 1;
    node *ans = solve(in, post, postOrderIdx, 0, n - 1, n);
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
    // 1 2 - 1 5 - 1 - 1 3 - 1 - 1
     node *root = buildTree(root);
    cout << "Postorder traversal of the constructed tree: ";
    postOrderTraversal(root);
    cout << endl;

    int in[] = {4, 2, 5, 1, 6, 3, 7};   
    int post[] = {4, 5, 2, 6, 7, 3, 1}; 
    int n = sizeof(in) / sizeof(in[0]);

    node *constructedTree = constructPreIn(in, post, n);

    cout << "Postorder traversal of the constructed from Inorder and Postorder: ";
    postOrderTraversal(constructedTree);
    cout << endl;
}