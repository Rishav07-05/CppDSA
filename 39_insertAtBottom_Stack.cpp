#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st , int target)
{
    if (st.empty())
    {
        st.push(target);
        return;
    }

    int store = st.top();
    st.pop();

    insertAtBottom(st , target);

    st.push(store);
}

int main()
{
    int size;
    cin >> size;
    stack<int> st;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        st.push(element);
    }
    int target;
    cin >> target;

    insertAtBottom(st , target);

    cout << "After inserting at bottom: ";
    
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}