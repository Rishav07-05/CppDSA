#include <bits/stdc++.h>
using namespace std;
int main(){
    // priority_queue<int> pq; // Always makes the max heap 
    // pq.push(5);
    // pq.push(8);
    // pq.push(9);
    // pq.push(11);
    // cout << "Top of heap: " << pq.top() << endl;
    // pq.pop();
    // cout << "Size of heap : " << pq.size() << endl;
    // if (pq.empty())
    // {
    //     cout << "Is empty";
    // }
    // else{
    //     cout << "Heap is not empty" << endl;
    // }



    // Making a min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(5);
    minHeap.push(8);
    minHeap.push(9);
    minHeap.push(11);
    cout << "Top of heap: " << minHeap.top() << endl;
    minHeap.pop();
    cout << "Size of heap : " << minHeap.size() << endl;
    if (minHeap.empty())
    {
        cout << "Is empty";
    }
    else{
        cout << "Heap is not empty" << endl;
    }
}