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

vector<int> verticalOrder(node* root){
    map<int, map<int, vector<int>>> nodes;
    queue <pair< node *, pair< int, int >>> q;
    vector<int> ans;
    if(root == NULL)
        return ans;
    q.push(make_pair(root, make_pair(0, 0)));
    while(!q.empty()){
        pair<node *, pair<int, int>> temp = q.front();
        q.pop();
        node *frontNode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;

        nodes[hd][lvl].push_back(frontNode->data);

        if(frontNode -> left)
            q.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));
        if(frontNode -> right)
            q.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
    }
    for(auto i: nodes){
        for(auto j: i.second){
            for(auto k: j.second){
                ans.push_back(k);
            }
        }
    }
    return ans;
}

int main()
{
    node *root = nullptr;
    root = buildTree(root);

    vector<int> result = verticalOrder(root);
    cout << "Vertical Order Traversal: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}