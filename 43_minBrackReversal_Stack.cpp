#include <bits/stdc++.h>
using namespace std;

int minReversal(string str , stack<char> st){

    if(str.length() % 2 != 0){
        return -1;
    }

    for (int i = 0; i < str.length(); i++){
        char ch = str[i];

        if(ch == '{'){
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }
    int a = 0, b = 0;
    while(!st.empty()){
        if(st.top() == '{'){
            b++;
        }
        else{
            a++;
        }
        st.pop();
    }
    int ans = (((a + 1) / 2) + ((b + 1) / 2));
    return ans;
}

int main(){
    string str;
    cin >> str;
    stack<char> st;
    int ans = minReversal(str, st);
    cout <<"The minimum reversal requires is : " << ans << endl;
} 