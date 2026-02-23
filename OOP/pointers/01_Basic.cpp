#include<iostream>
using namespace std;
int main()
{
    int number=10;
    int *ptr=&number;
    cout<<"Direct Variable : "<<number<<endl;
    cout<<"Dereference Ptr : "<<*ptr;
    return 0;
}