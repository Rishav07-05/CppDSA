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

void solve(node* root , int sum , int &maxSum, int len , int &maxLen){
    if(root == NULL) {
        if(len > maxLen){
            maxLen = len;
            maxSum = sum;
        }
        else if(len == maxLen){
            maxSum = max(sum, maxSum);
        }
        return;
    }

    sum += root->data;
    solve(root->left, sum, maxSum, len + 1, maxLen);
    solve(root->right, sum, maxSum, len + 1, maxLen);
}

int sumLargestBloodline(node* root){
    int len = 0;
    int maxLen = 0;
    int sum = 0;
    int maxSum = INT_MIN;
    solve(root, sum, maxSum, len , maxLen);
    return maxSum;
}

int main()
{
    node *root = nullptr;
    root = buildTree(root);
    int ans = sumLargestBloodline(root);
    cout << "sum of the largest bloodine in a tree: " << ans<< endl;
}