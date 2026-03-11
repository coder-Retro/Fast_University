#include<iostream>
using namespace std;
int main()
{
    int a=2,b=3;
    int *p,*q;
    p=&a;
    q=&b;
    cout<<"Before Swap : "<<endl;
    cout<<"a = "<<*p<<" , b = "<<*q<<endl;
    // Swapping Using Pointers and bitwise XOR operator
    *p ^= *q;
    *q = *p ^ *q;
    *p ^= *q;
    // Swapped
    cout<<"\nAfter Swap : "<<endl;
    cout<<"a = "<<*p<<" , b = "<<*q<<endl;
    return 0;
}