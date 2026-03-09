#include<iostream>
#include<stack>
using namespace std;
/*
Stack is basically like a real life stack where things
are stacked one over the other. Stack is used where we
need to utilize the LastInFirstOut(LIFO) approach such
as in solving the valid parenthesis leetcode problem, 
and many other such situations.
*/
int main()
{
    // Declaration:
    stack<int> s;
    // Major Functions:
    s.push(1); // puts element into stack
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.top()<<'\n'; // gives top element of stack
    s.pop(); // removes top element of stack
    cout<<s.top()<<'\n'; 
    cout<<s.size()<<'\n'; // gives size of stack
    cout<<s.empty()<<'\n'; // checks is stack is empty
    // stack print loop:
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<'\n';
    // s.swap(s2) Function:
    s.push(1);
    s.push(2);
    s.push(3);
    stack<int> s2;
    s.swap(s2);
    // s and s2 swapped their values, s2 now has 3,2,1 and s is empty
    cout<<s.size()<<'\n';
    cout<<s2.size()<<'\n';
    return 0;
}