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

node* insertIntoBST(node* &root , int d){
    if(root == nullptr){
        return new node(d);
    }
    if(d > root -> data){
        root->right = insertIntoBST(root->right, d);
    }
    else{
        root->left = insertIntoBST(root->left, d);
    }
}

void takeInput(node* root){
    int data;
    cin >> data;
    while(data != -1){
        insertIntoBST(root, data);
        cin >> data;
    }
}

node* maxVal(node* root){
    node *temp = root;
    while(temp-> right != nullptr){
        temp = temp->right;
    }
    return temp;
}

node*deleteFromBST(node* root , int &val){
    if(root == nullptr){
        return root;
    }
    if(root -> data == val){
        // 0 child case 
        if(root -> left == nullptr && root -> right == nullptr){
            delete root;
            return nullptr;
        }
        // 1 child case
        // right side case
        if(root -> right != nullptr &&  root -> left == nullptr){
            node *temp = root->right;
            delete root;
            return temp;
        }
        // left side case
        if(root -> right == nullptr &&  root -> left != nullptr){
            node *temp = root->left;
            delete root;
            return temp;
        }

        // 2 child case
        if(root -> left != nullptr && root -> right != nullptr){
            int maxi = maxVal(root->left)->data;
            root->data = maxi;
            root->left = deleteFromBST(root->left , val);
            return root;
        }
    }

    else if(root -> data > val){
        root->left = deleteFromBST(root->left , val);
    }
    else{
        root->right = deleteFromBST(root->right, val);
    }
}

int main(){
    node *root = nullptr;
    takeInput(root);

    int val;
    cin >> val;

    root = deleteFromBST(root, val);
}