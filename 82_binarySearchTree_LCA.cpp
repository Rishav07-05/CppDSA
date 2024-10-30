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

node* LCA(node* root , int n1 , int n2){
    if(root == nullptr)
        return nullptr;
    if (n1 > root->data && n2 > root->data){
        return LCA(root->right, n1, n2);
    }
    if (n1 < root->data && n2 < root->data){
        return LCA(root->left, n1, n2);
    }
    return root;
}

int main()
{
    node *root = nullptr;
    takeInput(root);

    int n1, n2;
    cin >> n1 >> n2;

    node *lcaNode = LCA(root, n1, n2);
    if (lcaNode)
    {
        cout << "LCA of " << n1 << " and " << n2 << " is: " << lcaNode->data << endl;
    }
    else
    {
        cout << "LCA not found." << endl;
    }
}