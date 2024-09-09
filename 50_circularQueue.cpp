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



    bool enqueue(int data){
        if((front == 0 && rear == size -1) || (rear == (front - 1) % size -1)){
            cout << "Queue is full";
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(rear == size - 1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = data;
        return true;
    }

    int dequeue(){
        if(front == -1){
            cout << "Queue is empty" << endl;
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
};

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Queue q;

    for (int i = 0; i < n; i++)
    {
        cout << q.enqueue(arr[i]) << endl;
    }


    cout << q.dequeue() << " ";

    cout << endl;
}