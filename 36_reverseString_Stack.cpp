#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "rishav";

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }

    string ans = "";

    while (!s.empty())
    {
        ans.push_back(s.top());

        s.pop();
    }
    cout << "Answer is " << ans << endl;
}