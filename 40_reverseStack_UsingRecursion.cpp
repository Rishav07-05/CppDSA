#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> st , int store)
{
    if(st.empty()){
        st.push(store);
        return;
    }

    int num = st.top();
    st.pop();

    insertAtBottom(st, store);

    st.push(num);
}

void reverseStack(stack<int> st){
    // base case 
    if(st.empty()){
        return;
    }

    int store = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st , store);
}

int main(){
    int size;
    cin >> size;
    stack<int> st;
    for (int i = 0; i < size; i++){
        int element;
        cin >> element;
        st.push(element);
    }

    reverseStack(st);

    cout << "Reversed Stack is : ";

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}