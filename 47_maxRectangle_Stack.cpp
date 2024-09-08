#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(int* arr , int m){
    stack<int> st;
    st.push(-1);

    vector<int> ans(m);

    for (int i = m - 1; i >= 0; i--){
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr){
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(int* arr, int m)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(m);

    for (int i = 0; i < m; i++){
        int curr = arr[i];
        while(st.top() != -1 && arr[st.top()] >= curr){
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largestRectangle(int* arr , int n)
{
    int len = n;

    vector<int> next(len);

    next = nextSmallerElement(arr, len);

    vector<int> prev(len);
    prev = prevSmallerElement(arr, len);

    int area = INT_MIN;

    for (int i = 0; i < len; i++)
    {
        int l = arr[i];
        if (next[i] == -1)
        {
            next[i] = len;
        }
        int b = next[i] - prev[i] - 1;
        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}

int main(){
    int m;
    cin >> m;
    int n;
    cin >> n;
    int M[1000][1000];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> M[i][j];
        }
    }

    int area = largestRectangle(M[0], n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(M[i][j] != 0)
                M[i][j] = M[i][j] + M[i - 1][j];
            else
                M[i][j] = 0;
        }
        area = max(area, largestRectangle(M[i], m));
    }
    cout<<"The max rectangle in binary matrix with all 1's are : " << area <<endl;
}