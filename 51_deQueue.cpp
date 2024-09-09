#include <bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(){
        size = 100000;
        arr = new int[size];
        front = rear = -1;
    }

    bool pushFront(int x)
    {
        if((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))){
            return false;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(front == 0 && rear != size - 1){
            front = size - 1;
        }
        else{
            front--;
        }
        arr[front] = x;
        return true;
    }

    bool pushRear(int x)
    {
        if(isFull()){
            return false;
        }
        else if(isEmpty()){
            front = rear = 0;
        }
        else if(rear == size - 1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    int popFront(){
        if(front == -1){
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){
            front = rear = -1;
        }
        else if(front == size - 1){
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }

    int popRear(){
        if(front == -1){
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if(front == rear){
            front = rear = -1;
        }
        else if(rear == 0){
            rear = size - 1;
        }
        else{
            rear--;
        }
        return ans;
    }
    
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty()
    {
        if(front == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if ((front == 0 && rear == size - 1) || ( front != 0 && rear ==(front - 1) % (size - 1))){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    // deque<int> d;

    // d.push_front(13);
    // d.push_front(12);
    // d.push_back(11);
    // d.push_back(14);
    // d.pop_back();

    // cout << d.front() << endl;
    // cout << d.back() << endl;

    Queue q;

    q.pushFront(19);
    q.pushFront(29);
    q.pushFront(21);
    q.pushRear(11);
    q.pushRear(14);
    q.pushRear(24);
    q.popRear();

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;
}