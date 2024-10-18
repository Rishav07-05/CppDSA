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
        this->right = NULL;
    }
};

node *buildingTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;

    cout << "Enter data to insert at left: " << data << endl;
    root->left = buildingTree(root->left);
    cout << "Enter data to insert at right: " << data << endl;
    root->right = buildingTree(root->right);
    return root;
}

bool checkSum(node* root){
    if(root == NULL)
        return true;
    bool left = checkSum(root->left);
    bool right = checkSum(root->right);
    int lsum = 0;
    int rsum = 0;
    if (left)
    {
        lsum += root->data;
    }
    if (right)
    {
        rsum += root->data;
    }
    bool currentNodeData(root->data = lsum + rsum);
    return left && right && currentNodeData;
}

int main()
{
    node *root = NULL;
    root = buildingTree(root);
    if (checkSum(root))
    {
        cout << "The tree follows the children sum property." << endl;
    }
    else
    {
        cout << "The tree does not follow the children sum property." << endl;
    }
}