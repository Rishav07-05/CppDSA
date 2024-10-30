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
    if(root == nullptr)
        return new node(d);

    if(d > root -> data){
        root->right = insertIntoBST(root->right, d);
    }
    else{
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


void inOrderTraversal(node* root , vector<int> &ans){
    if(root == nullptr)
        return;
    inOrderTraversal(root->left, ans);
    ans.push_back(root->data);
    inOrderTraversal(root->right, ans);
}

int kthSmallest(node* root , int tar){
    vector<int> ans;
    inOrderTraversal(root, ans);
    if(tar <= 0 || tar > ans.size()){
        return -1;
    }
    return ans[tar];
}

int main()
{
    node *root = nullptr;
    takeInput(root);

    int k;
    cout << "Enter k for k-th smallest element: ";
    cin >> k;

    int result = kthSmallest(root, k);
    if (result != -1)
    {
        cout << "The " << k << "-th smallest element is: " << result << endl;
    }
    else
    {
        cout << "Invalid value for k." << endl;
    }
}