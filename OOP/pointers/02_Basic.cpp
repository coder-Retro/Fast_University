#include<iostream>
using namespace std;
int main()
{
    int number=10;
    int *ptr=&number;
    cout<<"Initial Value    : "<<*ptr<<endl;
    (*ptr)++; // must add () to avoid unreliable behaviour
    cout<<"After (*ptr)++   : "<<*ptr<<endl;
    (*ptr)--;
    cout<<"After (*ptr)--   : "<<*ptr<<endl;
    (*ptr)+=10;
    cout<<"After (*ptr)+=10 : "<<*ptr<<endl;
    (*ptr)-=10;
    cout<<"After (*ptr)-=10 : "<<*ptr;
    return 0;
}