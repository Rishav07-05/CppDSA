#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *right;
        node *left;
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
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data inserting at left: " << data << endl;
    root->left = buildingTree(root->left);
    cout << "Enter data inserting at right: " << data << endl;
    root->right = buildingTree(root->right);
    return root;
}

int maxDepth(node* root){
    if(root == NULL){
        return 0;
    }
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return max(left , right) + 1;
}

int diameter(node* root){
    if(root == NULL){
        return 0;
    }
    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = maxDepth(root -> left) + 1 + maxDepth(root -> right);
    int ans = max(op1, max(op2, op3));
    return ans;
}

int main()
{
    node *root = NULL;
    root = buildingTree(root);
    int ans = diameter(root);
    cout << "Diameter of tree is: " << ans << endl;
}