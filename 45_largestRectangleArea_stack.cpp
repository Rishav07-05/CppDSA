#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> arr, int len)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(len);

    for (int i = len - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> arr, int len)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(len);

    for (int i = 0; i < len; i++)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int> &height , int n)
{
    int len = n;

    vector<int> next(len);

    next = nextSmallerElement(height, len);

    vector<int> prev(len);
    prev = prevSmallerElement(height, len);

    int area = INT_MIN;

    for (int i = 0; i < len; i++)
    {
        int l = height[i];
        if (next[i] == -1)
        {
            next[i] = len;
        }
        int b = next[i] - prev[i] - 1;
        int newArea = l * b;
        area = max(area , newArea);
    }
    return area;
}

int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    int ans = largestRectangleArea(height , n);
    cout << ans << endl;
}