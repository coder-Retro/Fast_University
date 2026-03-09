#include<iostream>
#include<list>
using namespace std;
int main()
{
    // Declaration:
    list<int> lis;
    // Major Functions:
    lis.push_back(2); // adds element to end of list
    lis.push_back(3);
    lis.push_front(1); // adds element to start of list
    lis.push_front(0);
    for(int i:lis) cout<<i<<" ";
    cout<<'\n';
    lis.pop_back(); // removes element from end of list
    lis.pop_front(); // removes element from start of list
    for(int i:lis) cout<<i<<" ";
    cout<<'\n';
    return 0;
}