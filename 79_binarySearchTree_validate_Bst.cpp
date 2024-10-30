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

node *insertIntoBst(node* root , int d)
{
    if(root == nullptr)
        return new node(d);

    if(d > root -> data){
        root->right = insertIntoBst(root->right , d);
    }
    else{
        root->left = insertIntoBst(root->left , d);
    }
    return root;
}

void takeInput(node *root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        cin >> data;
        root = insertIntoBst(root, data);
    }
}





// ----------------  Approach 1 -------------
// bool isBST(node* root , int min , int max){
//     if(root == nullptr){
//         return true;
//     }
//     if(root -> data >= min && root -> data <= max){
//         bool left = isBST(root->left, min, root -> data);
//         bool left = isBST(root->left, root -> data , max);
//         return left && right;
//     }
//     else{
//         return false;
//     }
// }


// bool validateBST(node* root){
//     return isBST(root, INT_MIN, INT_MAX);
// }





// ------------------  Approach 2 -----------------
void inOrderTraversal(node* root , vector<int> ans){
    if(root == nullptr)
        return;

    inOrderTraversal(root->left , ans);
    ans.push_back(root->data);
    inOrderTraversal(root->right, ans);
}

bool validateBST(node* root){
    vector<int> ans;
    inOrderTraversal(root, ans);
    for (int i = 1; i < ans.size(); i++){
        if(ans[i] <= ans[i - 1]){
            return false;
        }
    }
    return true;
}



int main()
{
    node *root = nullptr;
    takeInput(root);
    if (validateBST(root))
    {
        cout << "The tree is a valid BST." << endl;
    }
    else
    {
        cout << "The tree is not a valid BST." << endl;
    }
}