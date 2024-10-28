#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *left;
        node *right;
    node(int d){
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node* buildTree(node* root){
    cout << "Enter the data";
    int data;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return nullptr;
    }
    cout << "Enter data in left: " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data in right: " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

node* createParentMapping(node* root , int target , map<node* , node*> &nodeToParent){
    node *res = nullptr;
    queue<node *> q;
    q.push(root);
    nodeToParent[root] = nullptr;

    while (!q.empty())
    {
        node *front = q.front();
        q.pop();
        if(front -> data == target){
            res = front;
        }
        if(front -> left){
            nodeToParent[front->left] = front;
            q.push(front->left);
        }
        if(front -> right){
            nodeToParent[front->right] = front;
            q.push(front->right);
        }
    }
    return res;
}

int burnTree(node *root, map<node *, node *> &nodeToParent)
{
    map<node *, bool> visited;
    queue<node *> q;
    q.push(root);
    visited[root] = true;
    int ans = 0;
    bool flag = 0;

    while(!q.empty()){
        int size = q.size();
        for (int i = 0; i < size; i++){
            node *front = q.front();
            q.pop();

            if(front -> left && !visited[front -> left]){
                flag = 1;
                q.push(front->left);
                visited[front->left] = 1;
            }
            if(front -> right && !visited[front -> right]){
                flag = 1;
                q.push(front->right);
                visited[front->right] = 1;
            }
            if(nodeToParent[front] && !visited[nodeToParent[front]]){
                flag = 1;
                q.push(nodeToParent[front]);
                visited[nodeToParent[front]] = 1;
            }
        }
        if(flag == 1){
            ans++;
        }
    }
    return ans;
}

int minTime(node* root , int target){
    map<node *, node *> nodeToParent;
    node *targetNode = createParentMapping(root, target, nodeToParent);
    int ans = burnTree(targetNode, nodeToParent);
    return ans;
}

int main()
{
    node *root = buildTree(root);
    cout << "Enter the target node to start burning: ";
    int target;
    cin >> target;

    int timeTaken = minTime(root, target);
    if (timeTaken == -1)
    {
        cout << "Target node not found in the tree." << endl;
    }
    else
    {
        cout << "Minimum time to burn the tree: " << timeTaken << " units." << endl;
    }
}