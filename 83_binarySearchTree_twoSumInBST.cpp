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

bool twoSum(node *root, int target)
{
    vector<int> ans;
    Inorder(root, ans);
    int i = 0;
    int j = ans.size() - 1;
    while (i < j){
        int sum = ans[i] + ans[j];
        if(sum == target){
            cout << "Pair found: " << ans[i] << ", " << ans[j] << endl;
            return true;
        }
        else if(sum < target){
            i++;
        }
        else{
            j--;
        }
    }
    cout << "No pair found." << endl;
    return false;
}

int main()
{
    node *root = nullptr;
    takeInput(root);

    int tar;
    cin >> tar;
    twoSum(root, tar);
}