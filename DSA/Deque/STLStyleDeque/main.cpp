#include<iostream>
#include"deque"
using namespace std;
void printFromFront(deque dq)
{
    while(!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<'\n';
}
void printFromBack(deque dq)
{
    while(!dq.empty())
    {
        cout<<dq.back()<<" ";
        dq.pop_back();
    }
    cout<<'\n';
}
int main()
{
    deque dq;
    // Pushing
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(4);
    dq.push_front(5);
    dq.push_front(6);
    // Front Print
    printFromFront(dq);
    // Bacl Print
    printFromBack(dq);
    // Empty Check
    cout<<dq.empty();
    return 0;
}