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

node *creatingTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data inserting in left: " << data << endl;
    root->left = creatingTree(root->left);
    cout << "Enter the data inserting in right: " << data << endl;
    root->right = creatingTree(root->right);
    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

// -------->  InOrder traversal <---------

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// --------> PreOrder traversal <---------

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// --------> PostOrder traversal <---------

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


void buildFromLevelOrder(node* &root){
    queue<node *> q;
    cout << "Enter data for root: " << endl;
    int data;
    cin>> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;
        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;
        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }

    }
}

int main()
{
    node *root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 --> elements
    // root = creatingTree(root);

    // level order traversal
    // cout << "Printing the level of traversal: " << endl;
    // levelOrderTraversal(root);

    // Inorder traversal
    // cout << "Inorder traversal is: ";
    // inorder(root);
    // cout << endl;

    // // PreOrder traversal
    // cout << "Preorder traversal is: ";
    // preorder(root);
    // cout << endl;

    // // postorder traversal
    // cout << "postorder traversal is: ";
    // postorder(root);
    // cout << endl;

    // building with level order traversal
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
}