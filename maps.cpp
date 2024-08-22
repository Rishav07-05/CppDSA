// map => It is a data structure which store the data in key value pairs
// In normal maps the key value pairs are arranged in a sorted manner.
// Time complexities = O(log(n)) for map.


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int, string> m;
//     m[1] = "abc";
//     m[8] = "ac";
//     m[3] = "aiui";
//     m[4] = "abctu";
//     m.insert({6, "Hello"});

//     auto it = m.find(8); // O(log(n))
//     m.erase(8); // O(log(n))

//     for(auto &i : m) {
//         cout << i.second << endl;
//     }
//         cout << (*it).first << endl; // printing the value came from the find part.
// }


// UNORDERED MAP

#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, string> m;
    m[1] = "abc";
    m[8] = "ac";
    m[3] = "aiui";
    m[4] = "abctu";
    m.insert({6, "Hello"});

    auto it = m.find(8); // O(log(n))
    m.erase(8); // O(log(n))

    for(auto &i : m) {
        cout << i.second << endl;
    }
        cout << (*it).first << endl; // printing the value came from the find part.
}



// Q. Given N strings, print unique strings in lexiographical order with their frequency.

// # include <bits/stdc++.h>
// using namespace std;
// int main(){
//     map<string, int> m;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; ++i){
//         string s;
//         cin >> s;
//         m[s]++;
//     }
//     for(auto it : m){
//         cout << it.first << " " << it.second << endl;
//     }
// }