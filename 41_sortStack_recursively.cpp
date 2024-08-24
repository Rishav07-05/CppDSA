#include <bits/stdc++.h>
using namespace std;


void sortInsert(stack<int> &st , int store){
    if(st.empty() || (!st.empty() && st.top() < store)){
        st.push(store);
        return;
    }

    int data = st.top();
    st.pop();

    sortInsert(st, store);

    st.push(data);
}

void sortStack(stack<int> &st){
    // base case 
    if(st.empty()){
        return;
    }

    int store = st.top();
    st.pop();

    sortStack(st);

    sortInsert(st, store);
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


    sortStack(st);

    cout << "After Sorting: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;
    
}