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

node* insertIntoBST(node* root , int d){
    if(root == nullptr) {
        return new node(d);
    }
    if(d > root -> data){
        root -> right = insertIntoBST(root->right , d);
    }
    else{
        root -> left = insertIntoBST(root->left, d);
    }
    return root;
}

void takeInput(node* &root){
    int data;
    cin >> data;
    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}


// recursive way

// bool searchInBST(node *root, int n)
// {
//     if(root == nullptr)
//         return false;
//     if(root -> data == n)
//         return true;

//     if(n > root -> data){
//         return searchInBST(root->right , n);
//     }
//     else{
//         return searchInBST(root->left, n);
//     }
// }



// iterative way 

bool searchBST(node* root , int n){
    node *temp = root;
    while(temp != nullptr){
        if (temp->data == n)
            return true;
        if (n > temp->data)
            temp = temp->right;
        else
            temp = temp->left;
    }
    return false;
}

int main(){
    node *root = nullptr;
    takeInput(root);
    int n;
    cin >> n;
    // if(searchInBST(root , n)){
    //     cout  << n << " Is present" << endl;
    // }
    // else{
    //     cout<< n << " Is not present" << endl;
    // }
    if(searchBST(root , n)){
        cout  << n << " Is present" << endl;
    }
    else{
        cout<< n << " Is not present" << endl;
    }
    return 0;
} 