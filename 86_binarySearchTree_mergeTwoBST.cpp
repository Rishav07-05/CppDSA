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


void inorderTraversal(node *root, vector<int> &result)
{
    if (root == nullptr)
        return;
    inorderTraversal(root->left, result);
    result.push_back(root->data);
    inorderTraversal(root->right, result);
}

vector<int> mergeSortedArrays( vector<int> &arr1,  vector<int> &arr2)
{
    vector<int> merged;
    for (int i = 0; i < arr1.size(); i++){
        merged.push_back(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++){
        merged.push_back(arr2[i]);
    }
    sort(merged.begin(), merged.end());
    return merged;
}

node *sortedArrayToBST( vector<int> &arr, int start, int end)
{
    if (start > end)
        return nullptr;

    int mid = start + (end - start) / 2;
    node *root = new node(arr[mid]);
    root->left = sortedArrayToBST(arr, start, mid - 1);
    root->right = sortedArrayToBST(arr, mid + 1, end);

    return root;
}


node *mergeBSTs(node *root1, node *root2)
{
    vector<int> elements1, elements2;

    inorderTraversal(root1, elements1);
    inorderTraversal(root2, elements2);

    vector<int> mergedElements = mergeSortedArrays(elements1, elements2);

    return sortedArrayToBST(mergedElements, 0, mergedElements.size() - 1);
}

void printInorder(node *root)
{
    if (root == nullptr)
        return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main()
{
    node *root1 = nullptr;
    node *root2 = nullptr;

    cout << "Input for first BST:\n";
    takeInput(root1);

    cout << "Input for second BST:\n";
    takeInput(root2);

    node *mergedRoot = mergeBSTs(root1, root2);

    cout << "Merged BST Inorder Traversal: ";
    printInorder(mergedRoot);
    cout << endl;
    return 0;
}