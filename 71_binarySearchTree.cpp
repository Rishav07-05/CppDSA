#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d) : data(d), left(nullptr), right(nullptr) {}
};

node *insertIntoBST(node *root, int d)
{
    if (root == nullptr)
    {
        return new node(d);
    }
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
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void inorder(node *root)
{
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


void preorder(node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(node *root)
{
    if (root == nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = nullptr;
    cout << "Enter data to create BST (enter -1 to stop): " << endl;
    takeInput(root);
    cout << "Printing the BST with Inorder: " << endl;
    inorder(root);
    cout << endl;

    cout << "Printing the BST with preorder: " << endl;
    preorder(root);
    cout << endl;

    cout << "Printing the BST with postorder: " << endl;
    postorder(root);
    return 0;
}
