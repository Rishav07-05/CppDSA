#include <bits/stdc++.h>
using namespace std;
int kthSmallest(vector<int> &arr , int k , int n){
    priority_queue<int> pq;
    for (int i = 0; i < k; i++){
        pq.push(arr[i]);
    }

    for (int i = k; i < n; i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    int ans = pq.top();
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; i++){
        cin >> ans[i];
    }
    int k;
    cin >> k;
    int myAns = kthSmallest(ans, k , n);
    cout<< "Kth smallest element is: " << myAns << endl;
}