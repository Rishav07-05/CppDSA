#include <bits/stdc++.h>
using namespace std;

int knows(vector<vector<int>> &arr , int a , int b){
    if(arr[a][b] == 1){
        return true;
    }
    else{
        return false;
    }
}

int findCelebrity(vector<vector<int>> &arr, int n)
{
    stack<int> st;
    for (int i = 0; i < n; i++){
        st.push(i);
    }

    while(st.size() > 1){
        int a = st.top();
        st.pop();

        int b = st.top();
        st.pop();

        if(knows( arr , a , b) ){
            st.push(b);
        }
        else{
            st.push(a);
        }
    }

    
    int candidate = st.top();

    bool rowCheck = false;
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[candidate][i] == 0){
            zeroCount++;
        }
    }
    if(zeroCount == n){
        rowCheck = true;
    }

    bool colCheck = false;
    int oneCount = 0;

    for (int i = 0; i < n; i++){
        if(arr[i][candidate] == 1){
            oneCount++;
        }
    }

    if(oneCount == n - 1){
        colCheck = true;
    }

    if(rowCheck == true && colCheck == true){
        return candidate;
    }
    else{
        return -1;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n , vector<int>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = findCelebrity(arr, n);
    cout << ans << endl;
}