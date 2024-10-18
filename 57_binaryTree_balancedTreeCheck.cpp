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
    if(data == -1){
        return NULL;
    }
    cout << "Inserting data at left: " << data << endl;
    root->left = buildingTree(root->left);
    cout << "Inserting data at right: " << data << endl;
    root->right = buildingTree(root->right);
    return root;
}

int maxDepth(node* root){
    if(root == NULL)
        return 0;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return max(left, right) + 1;
}

bool checkBalance(node* root){
    if(root == NULL)
        return true;

    bool left = checkBalance(root->left);
    bool right = checkBalance(root->right);
    int diff = abs(maxDepth(root->left) - maxDepth(root->right)) <= 1;
    if(left && right && diff){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    node *root = NULL;
    root = buildingTree(root);
    if(checkBalance(root)){
        cout << "Tree is balanced tree.";
    }
    else{
        cout << "Not a balanced tree";
    }
}