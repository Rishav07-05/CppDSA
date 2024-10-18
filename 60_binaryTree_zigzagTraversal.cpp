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

vector<int> zigzagTraversal(node *root)
{
    queue<node *> q;
    vector<int> res;
    if(root == NULL){
        return res;
    }
    q.push(root);
    bool ltor = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);
        for (int i = 0; i < size; i++)
        {
            node *temp = q.front();
            q.pop();
            int index = ltor ? i : size - i - 1;
            ans[index] = temp->data;

            if(temp -> left){
                q.push(temp->left);
            }
            if(temp -> right){
                q.push(temp->right);
            }
        }
        ltor = !ltor;
        for (auto i : ans)
        {
            res.push_back(i);
        }
    }
    return res;
}

int main()
{
    node *root = nullptr;
    root = buildTree(root);
    zigzagTraversal(root);
}