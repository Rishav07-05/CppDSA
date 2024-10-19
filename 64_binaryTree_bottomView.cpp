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

vector<int> bottomView(node* root){
    vector<int> ans;
    if((root == NULL))
        return ans;
    map<int, int> bottomNode;
    queue<pair<node *, int>> q;

    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<node *, int> temp = q.front();
        q.pop();
        node *frontNode = temp.first;
        int hd = temp.second;
        bottomNode[hd] = frontNode->data;

        if(frontNode -> left){
            q.push(make_pair(frontNode->left, hd - 1));
        }
        if(frontNode -> right){
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }
    for (auto i : bottomNode)
    {
        ans.push_back(i.second);
    }
    return ans;
}

int main()
{
    node *root = nullptr;
    root = buildTree(root);
    vector<int> ans = bottomView(root);
    cout << "Bottom View: ";
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}