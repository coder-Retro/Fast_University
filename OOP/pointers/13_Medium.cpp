#include<iostream>
using namespace std;
int main()
{
    int target,freq=0;
    cout<<"Enter Target Element : ";
    cin>>target;
    int size;
    cout<<"Enter Size of Array : ";
    cin>>size;
    int *ptr=new int[size];
    cout<<"Enter Array : ";
    for(int i=0;i<size;i++)
    {
        cin>>*(ptr+i);
        if(*(ptr+i)==target)
            freq++;
    }
    cout<<"Frequency of "<<target<<" in Array is : "<<freq;
    delete[] ptr;
    ptr=nullptr;
    return 0;
}