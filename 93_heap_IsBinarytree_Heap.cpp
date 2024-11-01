#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree
{
private:
    Node *root;

    int countNode(Node *node)
    {
        if (node == nullptr)
            return 0;
        return 1 + countNode(node->left) + countNode(node->right);
    }

    bool isCBT(Node *node, int index, int totalCnt)
    {
        if (node == nullptr)
            return true;
        if (index >= totalCnt)
            return false;
        return isCBT(node->left, 2 * index + 1, totalCnt) &&
               isCBT(node->right, 2 * index + 2, totalCnt);
    }

    bool isMaxOrder(Node *node)
    {
        if (node == nullptr)
            return true;
        if (node->left == nullptr && node->right == nullptr)
            return true;
        if (node->right == nullptr)
            return (node->data > node->left->data);

        bool left = isMaxOrder(node->left);
        bool right = isMaxOrder(node->right);
        return left && right && (node->data > node->left->data && node->data > node->right->data);
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(int value)
    {
        if (root == nullptr)
        {
            root = new Node(value);
        }
        else
        {
            vector<Node *> queue;
            queue.push_back(root);
            while (!queue.empty())
            {
                Node *current = queue.front();
                queue.erase(queue.begin());

                if (current->left == nullptr)
                {
                    current->left = new Node(value);
                    break;
                }
                else
                {
                    queue.push_back(current->left);
                }
                if (current->right == nullptr)
                {
                    current->right = new Node(value);
                    break;
                }
                else
                {
                    queue.push_back(current->right);
                }
            }
        }
    }

    bool isHeap()
    {
        int index = 0;
        int totalCnt = countNode(root);
        return isCBT(root, index, totalCnt) && isMaxOrder(root);
    }
};

int main()
{
    BinaryTree tree;

    vector<int> elements = {10, 9, 8, 7, 6, 5, 4};
    for (int value : elements)
    {
        tree.insert(value);
    }

    if (tree.isHeap())
    {
        cout << "The tree is a max-heap." << endl;
    }
    else
    {
        cout << "The tree is not a max-heap." << endl;
    }

    return 0;
}
