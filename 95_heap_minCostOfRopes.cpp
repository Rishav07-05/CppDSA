#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++){
        pq.push(arr[i]);
    }
        int cost = 0;
    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int sum = a + b;

        cost += sum;
        pq.push(sum);
    }
    cout<< cost;
}