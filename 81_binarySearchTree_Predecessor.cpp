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

void inorderPre(node* root , vector<int> &ans)
{
    if(root == nullptr)
        return;
    inorderPre(root->left, ans);
    ans.push_back(root->data);
    inorderPre(root->right, ans);
}

int predecessor(node *root, int k)
{
    vector<int> pre;
    inorderPre(root, pre);
    if (k <= 0 || k > pre.size())
    {
        return -1;
    }

    return pre[k - 1];
}


void inorderSuc(node* root , vector<int> &ans)
{
    if(root == nullptr)
        return;
    inorderSuc(root->left, ans);
    ans.push_back(root->data);
    inorderSuc(root->right, ans);
}

int Successor(node *root, int k)
{
    vector<int> suc;
    inorderSuc(root, suc);
    if (k <= 0 || k > suc.size())
    {
        return -1;
    }

    return suc[k + 1];
}

int main()
{
    node *root = nullptr;
    takeInput(root);
    int k;
    cin >> k;
    int ans = predecessor(root, k);
    if (ans != -1)
    {
        cout << "The " << k << "-th predecessor is: " << ans << endl;
    }
    else
    {
        cout << "Invalid value for k." << endl;
    }

    

    int ansSucc = Successor(root, k);
    if (ansSucc != -1)
    {
        cout << "The " << k << "-th successor is: " << ansSucc << endl;
    }
    else
    {
        cout << "Invalid value for k." << endl;
    }
}