#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *left;
        node *right;
    node(int d){
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node* buildTree(node* root){
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return nullptr;
    }
    cout << "Enter the data in left: " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data in right: " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void morrisTraversal(node* root){
    node *curr = root;

    while(curr){
        if(!curr -> left){
            cout << curr->data << " ";
            curr = curr->right;
        }
        else{
            node *predecessor = curr->left;
            while(predecessor -> right && predecessor -> right != curr){
                predecessor = predecessor -> right;
            }
            if(!predecessor -> right){
                predecessor->right = curr;
                curr = curr->left;
            }
            else{
                predecessor->right = nullptr;
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
}

int main()
{
    node *root = buildTree(root);
    cout << "Morris In-Order Traversal: ";
    morrisTraversal(root);
    cout << endl;
    return 0;
}