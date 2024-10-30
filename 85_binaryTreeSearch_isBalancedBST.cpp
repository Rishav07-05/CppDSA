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

node *insertIntoBST(node *root, int d)
{
    if (root == nullptr)
        return new node(d);
    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

void takeInput(node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        cin >> data;
        root = insertIntoBST(root, data);
    }
}

void Inorder(node *root, vector<int> &ans)
{
    if (root == nullptr)
        return;
    Inorder(root->left, ans);
    ans.push_back(root->data);
    Inorder(root->right, ans);
}

node *inOrderToBST(int s, int e, vector<int> ans)
{
    if(s > e)
        return nullptr;
    int mid = s + (e - s) / 2;
    node *root = new node(ans[mid]);
    root->left = inOrderToBST(s, mid - 1, ans);
    root->right = inOrderToBST(mid + 1, e , ans);
    return root;
}

node *isBalanced(node *root)
{
    vector<int> ans;
    Inorder(root, ans);
    return inOrderToBST(0, ans.size() - 1, ans);
}

int main()
{
    node *root = nullptr;
    takeInput(root);
}