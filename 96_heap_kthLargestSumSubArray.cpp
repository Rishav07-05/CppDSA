#include <bits/stdc++.h>
using namespace std;

int kthLargestSubarray(vector<int> &arr , int n , int k){
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < n; j++){
            sum += arr[j];
            if(pq.size() < k){
                pq.push(sum);
            }
            else{
                if(sum > pq.top()){
                    pq.pop();
                    pq.push(sum);
                }
            }
        }
    }
    return pq.top();
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int ans = kthLargestSubarray(arr, n, k);
    cout << "The Kth largest subarray sum is: " << ans << endl;
}