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
    if (root == nullptr)
        return new node(d);
    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
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

void Inorder(node *root, vector<int> &ans)
{
    if (root == nullptr)
        return;
    Inorder(root->left, ans);
    ans.push_back(root->data);
    Inorder(root->right, ans);
}

node* flatten(node* root){
    vector<int> ans;
    Inorder(root, ans);

    node *newRoot = new node(ans[0]);
    node *curr = newRoot;
    for (int i = 1; i < ans.size(); i++){
        node *temp = new node(ans[i]);
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }

    curr->left = nullptr;
    curr->right = nullptr;
    return newRoot;
}

void printFlattened(node *root)
{
    while (root)
    {
        cout << root->data << " ";
        root = root->right;
    }
    cout << endl;
}

int main()
{
    node *root = nullptr;
    takeInput(root);
    node *ans = flatten(root);
    cout << "Flattened tree in linked list form: ";
    printFlattened(ans);
}