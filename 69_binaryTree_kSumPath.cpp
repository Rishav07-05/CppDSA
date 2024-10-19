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

void solve(node* root , int k , vector<int> path , int cnt){
    if(root == nullptr)
        return;
    path.push_back(root->data);
    solve(root->left, k, path, cnt);
    solve(root->right, k, path, cnt);

    int size = path.size();
    int sum = 0;
    for (int i = size - 1; i >= 0; i--){
        sum += path[i];
        if(sum == k){
            cnt++;
        }
    }
    path.pop_back();
}

int sumK(node* root , int k){
    vector<int> path;
    int cnt = 0;
    solve(root , k ,path, cnt);
    return cnt;
}

int main()
{
    node *root = nullptr;
    root = buildTree(root);
}