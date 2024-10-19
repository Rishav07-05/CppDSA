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
        this->left = NULL;
        this->right = nullptr;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return nullptr;
    }
    cout << "Enter data to insert at left: " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data to insert at right: " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

node* lca(node* root , int n1 , int n2){
    if(root == NULL)
        return nullptr;
    if(root -> data == n1 || root -> data == n2){
        return root;
    }
    node* leftAns = lca(root->left, n1, n2);
    node *rightAns = lca(root->right, n1, n2);

    if(leftAns != nullptr && rightAns != nullptr){
        return root;
    }
    else if(leftAns != nullptr && rightAns == nullptr){
        return leftAns;
    }
    else if(leftAns == nullptr && rightAns != nullptr){
        return rightAns;
    }
    else{
        return nullptr;
    }
}

int main()
{
    node *root = nullptr;
    root = buildTree(root);

    int n1, n2;
    cout << "Enter the two node values to find their LCA: ";
    cin >> n1 >> n2;

    node *ancestor = lca(root, n1, n2);
    if (ancestor != nullptr)
        cout << "LCA of " << n1 << " and " << n2 << " is: " << ancestor->data << endl;
    else
        cout << "LCA does not exist." << endl;

    return 0;
}