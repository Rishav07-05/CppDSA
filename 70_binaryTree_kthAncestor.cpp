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

bool solve(vector<int> ans , node *root, int k, int n1)
{
    if(root == nullptr)
        return false;
    ans.push_back(root->data);
    if(root -> data == n1){
        return true;
    }
    if (solve(ans, root->left,k, n1) || solve(ans, root->right, k,n1))
    {
        return true;
    }

    ans.pop_back();
    return false;
}

int kthAncestor(node *root, int k, int n1)
{
    vector<int> ans;
    if (!solve(ans, root, k , n1))
    {
        return -1;
    }

    int size = ans.size();
    if(size <= k){
        return -1;
    }
    return ans[size - k - 1];
}

int main()
{
    node *root = nullptr;
    root = buildTree(root);
    int k;
    cin >> k;
    int n1;
    cin >> n1;
    int ancestor = kthAncestor(root, k, n1);
    if (ancestor != -1)
    {
        cout << "The " << k << "th ancestor of node " << n1 << " is: " << ancestor << endl;
    }
    else
    {
        cout << "The node doesn't have " << k << " ancestors." << endl;
    }
}