#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;

    q.push(11);
    cout << q.front() <<endl;
    q.push(12);
    q.push(13);
    q.push(1);

    cout << q.size() << endl;
    q.pop();
    cout << q.front() <<endl;
    cout << q.size() << endl;

    if(q.empty()){
        cout << "Queue is empty." << endl;
    }
    else{
        cout << "Queue is not empty." << endl;
    }
}