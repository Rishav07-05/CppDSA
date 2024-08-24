#include <bits/stdc++.h>
using namespace std;


void solve(stack<int> &st , int count , int size)
{   
    // base case
    if(count == size/2){
        st.pop();
        return;
    }

    // store top element to increase the count
    int num = st.top();
    st.pop();

    // Recursive call
    solve(st, count + 1, size);

    //Pushing the stored top element in the stack when the condition satisfies

    st.push(num);
}



void deleteMiddle(stack<int>&st , int size){
    int count = 0;
    solve(st, count, size);
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

    deleteMiddle(st, size);

    cout << "Stack after deleting the middle element: ";

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    
}