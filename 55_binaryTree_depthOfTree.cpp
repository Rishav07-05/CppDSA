#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *left;
        node *right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


node* buildingTree(node* root){
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if(data == -1)
        return NULL;

    cout << "Enter the data inserting in left: " << data << endl;
    root->left = buildingTree(root->left);
    cout << "Enter the data inserting in right: " << data << endl;
    root->right = buildingTree(root->right);
    return root;
}

void inOrder(node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int maxDepth(node* root){
    if(root ==  NULL){
        return 0;
    }

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    int ans = max(left, right) + 1;
    return ans;
}

int main(){
    node *root = NULL;
    // 1 3 7 - 1 - 1 11 - 1 - 1 5 17 - 1 - 1 - 1
    root = buildingTree(root);
    // inOrder(root);
    int ans = maxDepth(root);
    cout << "Maximum depth of tree is: " << ans << endl;
}