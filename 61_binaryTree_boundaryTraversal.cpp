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

void traverseLeft(node* root ,vector<int> &ans){
    if(root == NULL || root -> left == NULL && root -> right == NULL)
        return;

    ans.push_back(root->data);
    if(root -> left)
        traverseLeft(root->left,ans);
    else
        traverseLeft(root->right,ans);
}

void traverseLeaf(node *root, vector<int> &ans)
{
    if(root == NULL)
        return;
    
    if(root -> left == NULL && root -> right == NULL){
        ans.push_back(root->data);
        return;
    }
    traverseLeaf(root->left , ans);
    traverseLeaf(root->right , ans);
}

void traverseRight(node* root , vector<int>  &ans){
    if(root == NULL || root -> left == NULL && root -> right == NULL)
        return;

    if(root -> right){
        traverseRight(root->right , ans);
    }
    else{
        traverseRight(root->left, ans);
    }
    ans.push_back(root->data);
}

vector<int> boundaryTraversal(node *root)
{
    vector<int> ans;
    if(root == NULL)
        return ans;
    ans.push_back(root->data);

    traverseLeft(root->left, ans);

    // for left subtree
    traverseLeaf(root->left, ans);
    // for right subtree
    traverseLeaf(root->right, ans);

    // traverse right part
    traverseRight(root->right, ans);
    return ans;
}

int main(){
    node *root = nullptr;
    root = buildTree(root);
    vector<int> res = boundaryTraversal(root);
    cout << "Boundary traversal: ";
    for(auto i: res){
        cout << i << " ";
        cout << endl;
    }
}