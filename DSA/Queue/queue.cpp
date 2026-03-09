#include<iostream>
#include<queue>
using namespace std;
/*
Queue is basically a DATA STRUCTURE that we use when we
need to utilize a FirstInFirstOut(FIFO) approach in the
code. Queue is like a pipe, elements enter from the rare
and exit from the front, like the uni-directional flow
of water in a pipeline.
*/
int main()
{
    // Declaration:
    queue<int> q;
    // Push Function:
    q.push(1);
    q.push(2);
    q.push(3);
    // Size Function:
    cout<<q.size()<<'\n';
    // Empty Function:
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        // Pop Function:
        q.pop();
    }
    cout<<'\n';
    // Swap Function:
    q.push(1);
    q.push(2);
    q.push(3);
    queue<int> q2;
    q.swap(q2);
    cout<<q.size()<<'\n';
    cout<<q2.size()<<'\n';
    return 0;
}