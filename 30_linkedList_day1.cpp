// Singly Linked List

// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data; // data
//         this->next = NULL; // address
//     }

//     //Destructor
//     ~Node(){
//         int value = this->data;
//         // memory free
//         if(this->next != NULL){
//             delete next;
//             this->next = NULL;
//         }
//         cout<< "Memory is free for node with data: " << value << endl;
//     }
// };

// void insertAtHead(Node* &head, int d){
//     // new node created
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;
// }

// void insertAtTail(Node* &tail , int d){
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail = tail -> next;
// }

// void print(Node* &head){
//     Node* temp = head;

//     while(temp != NULL){
//         cout << temp -> data<< " ";
//         temp = temp -> next;
//     }
//     cout<< endl;
// }

// void insertAtPosition(Node* &head, Node* &tail , int position , int d){
//     if(position == 1){
//         insertAtHead(head , d);
//         return;
//     }
//     Node* temp = head;
//     int cnt = 1;

//     while(cnt < position-1){
//         temp = temp->next;
//         cnt++;
//     }
//     // Inserting at last position
//     if(temp -> next == NULL){
//         insertAtTail(tail , d);
//         return ;
//     }
//     // Creating a node for d
//     Node* nodeToInsert = new Node(d);
//     nodeToInsert -> next = temp -> next;
//     temp -> next = nodeToInsert;
// }

// void deleteNode(int position , Node* &head){
//     if(position == 1){
//         Node* temp = head;
//         head = head -> next;
//         temp -> next = NULL;
//         delete temp;
//     }

//     else{
//         Node* curr = head ;
//         Node* prev = NULL;

//         int cnt = 1;
//         while(cnt < position){
//             prev = curr;
//             curr = curr->next;
//             cnt++;
//         }
//         prev -> next = curr -> next;
//         curr -> next = NULL;
//         delete curr;
//     }
// }

// int main(){
//     Node* node1 = new Node(10);            temp -> next -> next   Node* xy = temp -> next
//     // cout<< node1 -> data << endl;
//     // cout<< node1 -> next << endl;

//     Node* head = node1;
//     Node* tail = node1;
//     print(head);

//     insertAtTail(tail , 12);
//     print(head);

//     insertAtTail(tail , 15);
//     print(head);

//     insertAtPosition(head, tail , 4 , 22);
//     print(head);

//     deleteNode(3 , head);
//     print(head);
// }

// Doubly Linked List

// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     // Constructor
//     Node(int d){
//         this->data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// void print(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<< temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout<< endl;
// }

// int getLength(Node* &head){
//     int len = 0;
//     Node* temp = head;
//     while(temp != NULL){
//         len++;
//         temp = temp -> next;
//     }
//     return len;
// }

// void insertAtHead(Node* &head , int d){
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head -> prev = temp;
//     head = temp;
// }

// void insertAtTail(Node* &tail , int d){
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     temp -> prev = tail;
//     tail = temp;
// }

// void insertAtPosition(Node* &tail,Node* &head , int position , int d){
//     if(position == 1){
//         insertAtHead(head , d);
//         return;
//     }
//     Node* temp = head;
//     int cnt = 1;
//     while(cnt < position - 1){
//         temp = temp -> next;
//         cnt++;
//     }

//     if(temp -> next == NULL){
//         insertAtTail(tail , d);
//         return;
//     }
//     Node* nodeToInsert = new Node(d);
//     nodeToInsert -> next = temp -> next;
//     temp -> next -> prev = nodeToInsert;
//     temp -> next = nodeToInsert;
//     nodeToInsert -> prev = temp;
// }

// int main(){
//     Node* node1 = new Node(10);
//     Node* head = node1;
//     Node* tail = node1;

//     print(head);
//     cout<< "My lenght of linked list: " << getLength(head);

//     cout<< endl;

//     insertAtHead(head , 11);
//     insertAtHead(head , 12);
//     insertAtHead(head , 13);
//     print(head);

//     insertAtTail(tail , 14);
//     print(head);

//     insertAtPosition(tail , head , 2 , 89);
//     insertAtPosition(tail , head , 1 , 100);
//     insertAtPosition(tail , head , 8 , 69);
//     print(head);
// }

// SinglyCircularly Linked List

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

    deletionNode(tail, 44);
    print(tail);
} 