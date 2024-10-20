#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *left;
        node *right;
    node(int d){
        this->data = d;
        this->right = nullptr;
        this->left = nullptr;
    }
};

node* insertIntoBST(node* root , int d){
    if(root == nullptr) {
        return new node(d);
    }

    if(d > root -> data){
        root->right = insertIntoBST(root->right, d);
    }

    else{
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

node* minVal(node* root){
    node *temp = root;
    while(temp -> left != nullptr){
        temp = temp->left;
    }
    return temp;
}

node* maxVal(node* root){
    node *temp = root;
    while(temp -> right != nullptr){
        temp = temp->right;
    }
    return temp;
}

void takeInput(node* &root){
    int data;
    cin >> data;
    while(data != -1){ 
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main(){
    node *root = nullptr;
    takeInput(root);
    cout << "Min Value of BST: " << minVal(root)->data << endl; 
    cout << "Max Value of BST: " << maxVal(root)->data << endl; 
}