// Stack follow an order of last in first out.
// we use push operation to insert in a stack.
// we use pop operation to remove in a stack.
// we use peak operation to check the top most element in a stack.
// we use empty operation to check either the stack is empty in a stack.

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s; // creation of stack

    // insert
    s.push(2);
    s.push(5);

    // delete

    s.pop();

    cout << "Printing top element: " << s.top() << " " << endl;

    // check empty or not 

    if(s.empty()){
        cout << "Stack is empty";
    }
    else{
        cout << "Stack is filled with something" << endl;
    }
}
