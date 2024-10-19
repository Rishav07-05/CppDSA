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
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    if (data == -1)
        return nullptr;
    root = new node(data);
    cout << "Data to be inserted at left: " << data;
    root->left = buildTree(root->left);
    cout << "Data to be inserted at right: " << data;
    root->right = buildTree(root->right);
    return root;
}

void solved(node *root, vector<int> &ans, int level)
{
    if (root == NULL)
        return;

    if (level == ans.size())
        ans.push_back(root->data);

    solved(root->right, ans, level + 1);
    solved(root->left, ans, level + 1);
}

vector<int> rightView(node *root)
{
    vector<int> ans;
    solved(root, ans, 0);
    return ans;
}

int main()
{
    node *root = nullptr;
    root = buildTree(root);

    vector<int> ans = rightView(root);
    cout << "right View: ";
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}