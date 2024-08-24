#include <bits/stdc++.h>
using namespace std;

bool checkValidParenthesis(string s){

    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char top = st.top();
                if ((ch == ')' && top == '(') 
                || (ch == '}' && top == '{') 
                || (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    string s;
    cin >> s;
    
    if(checkValidParenthesis(s)){
        cout << "Valid case" << endl;
    }
    else{
        cout << "Invalid case" << endl;
    }
}