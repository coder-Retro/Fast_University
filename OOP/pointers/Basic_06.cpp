#include<iostream>
using namespace std;
int main()
{
    const int SIZE=5;
    int arr[SIZE];
    int *ptr=arr;
    int sum=0;
    int *answer=&sum;
    cout<<"Array : ";
    for(int i=0;i<SIZE;i++)
    {
        *(ptr+i)=i+1; // Filling Up Array
        cout<<*(ptr+i)<<" "; // Displaying Elements
        *answer += *(ptr+i); // Accumulating Sum Using Pointer
    }
    cout<<"\nSum : "<<*answer;
    return 0;
}