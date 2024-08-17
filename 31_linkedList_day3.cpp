#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // destructor

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data: " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    else
    {
        // list is not empty
        // assuming that the element is present in the temp
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found -> curr is representing element node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "Empty";
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deletionNode(Node *tail, int value)
{
    // empty List
    if (tail == NULL)
    {
        cout << "Empty";
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        if (curr = prev)
        {
            tail = NULL;
        }
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}


bool isCircularList(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }
    if(temp == head){
        return true;
    }
    return false;
}


int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 44);
    print(tail);

    // insertNode(tail , 44 , 14);
    // print(tail);

    // insertNode(tail , 44 , 24);
    // print(tail);

    // insertNode(tail , 14 , 69);
    // print(tail);

    // insertNode(tail , 14 , 84);
    // print(tail);

    // deletionNode(tail, 44);
    // print(tail);

    if(isCircularList){
        cout<< "Is Circular" << endl;
    }
    else{
        cout<< "Is not Circular" << endl;
    }
} 