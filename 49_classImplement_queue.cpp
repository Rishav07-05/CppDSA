#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue()
    {
        size = 100001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }


    bool isEmpty()
    {
        if(front == rear)
            return true;
        else
            return false;
    }

    void pushOper(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }



    int popOper()
    {
        if(front ==  rear) {
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }



    int Front()
    {
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }



    int Rear()
    {
        if(front == rear){
            return -1;
        }
        else{
            return arr[rear - 1];
        }
    }

};

int main()
{
    Queue q;
    int ele;
    cin >> ele;
    int data;

    for (int i = 0; i < ele; i++){
        cin >> data;
        q.pushOper(data);
    }

    cout << "The front: " << q.Front() << endl;

    int rear = q.Rear();
    cout << "The rear: " << q.Rear() << endl;
    
    q.popOper();

    cout << "The front: " << q.Front() << endl;
}