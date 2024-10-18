#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *left;
        node *right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildingTree(node* root){
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

bool isIdentical(node* r1 , node* r2){
    if(r1 == NULL && r2 == NULL){
        return true;
    }
    if(r1 == NULL && r2 != NULL) {
        return false;
    }
    if(r1 != NULL && r2 == NULL){
        return false;
    }
    bool left = isIdentical(r1->left, r2->left);
    bool right = isIdentical(r1->right, r2->right);
    bool check = r1->data == r2->data;

    if(left && right && check){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    node *r1 = NULL;
    node *r2 = NULL;

    cout << "Building first tree:" << endl;
    r1 = buildingTree(r1);

    cout << "Building second tree:" << endl;
    r2 = buildingTree(r2);

    if(isIdentical(r1 , r2)){
        cout << "Are identicals...";
    }
    else{
        cout << "Are not identicals...";
    }
}