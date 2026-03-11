#include<iostream>
using namespace std;
int main()
{
    const int SIZE=5;
    int arr[SIZE];
    // Filling Up Array
    for(int i=0;i<SIZE;i++)
        *(arr+i)=i+1;
    // Writing Original Array
    cout<<"Original Array : ";
    for(int i=0;i<SIZE;i++)
        cout<<*(arr+i)<<" ";
    // Reversing Using "Two Pointer Approach"
    for(int *start=arr,*end=arr+SIZE-1;start<end;start++,end--)
    {
        // Swapping using pointers and bitwise XOR operator
        *start = *start ^ *end;
        *end   = *start ^ *end;
        *start = *start ^ *end;
    }
    // Writing Reversed Array
    cout<<"\nReversed Array : ";
    for(int i=0;i<SIZE;i++)
        cout<<*(arr+i)<<" ";
    return 0;
}