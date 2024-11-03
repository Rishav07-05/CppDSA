#include <bits/stdc++.h>
using namespace std;
int main(){
    // creation 
    unordered_map<string, int> mpp;

    // insertion
    // 1st method for insertion
    pair<string, int> p = make_pair("r", 1);
    mpp.insert(p);

    // 2nd method for insertion
    pair<string, int> p2("i", 2);
    mpp.insert(p2);

    // 3rd method for insertion
    mpp["hello"] = 3;

    // search
    cout << mpp["hello"] << endl;

    //size
    cout << mpp.size() << endl;

    // check presence

    cout << mpp.count("Risss") << endl;
    cout << mpp.count("r") << endl;

    // erase
    mpp.erase("hello");
    cout << mpp.size() << endl;

    // iteration 
    for(auto i: mpp){
        cout << i.first << " ";
        cout << i.second << " ";
    }
}