#include<iostream>
#include"deque"
using namespace std;
int main()
{
    deque dq;
    // Pushing
    dq.push_back(1); cout<<"inserted 1 from back\n";
    dq.push_back(2); cout<<"inserted 2 from back\n";
    dq.push_back(3); cout<<"inserted 3 from back\n";
    dq.push_front(4); cout<<"inserted 4 from font\n";
    dq.push_front(5); cout<<"inserted 5 from font\n";
    dq.push_front(6); cout<<"inserted 6 from font\n";
    // Back Check
    cout<<"Back insertions : ";
    cout<<dq.back()<<" "; dq.pop_back();
    cout<<dq.back()<<" "; dq.pop_back();
    cout<<dq.back()<<" "; dq.pop_back();
    // Front Check
    cout<<"\nFront Insertions : ";
    cout<<dq.front()<<" "; dq.pop_front();
    cout<<dq.front()<<" "; dq.pop_front();
    cout<<dq.front()<<" "; dq.pop_front();
    // Empty Check
    cout<<"\nEmpty Check: "<<dq.empty();
    return 0;
}