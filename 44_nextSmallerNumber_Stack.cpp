#include <bits/stdc++.h>
using namespace std;

vector<int> FindNextSmallest(int arr[] , int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--){
        int curr = arr[i];
        while(st.top() >= curr){
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> myAns = FindNextSmallest(arr, n);
    for (int i = 0; i < n; i++){
        cout << myAns[i] << " ";
    }
}
