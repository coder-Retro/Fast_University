#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    srand(time(0));
    const int SIZE=5;
    int arr[SIZE];
    int *ptr=arr;
    cout<<"Actual Array : ";
    for(int i=0;i<SIZE;i++)
    {
        *(ptr+i)=rand()%100; // Filling up array with randoms
        cout<<*(ptr+i)<<" "; // Displaying Elements
    }
    // Sorting Array
    for(int i=0;i<SIZE-1;i++)
    {
        if(*(ptr+i)>*(ptr+i+1)) // Out of Order Value Detected
        {
            // Swapping using pointers and bitwise XOR operator
            *(ptr+i)   = *(ptr+i) ^ *(ptr+i+1);
            *(ptr+i+1) = *(ptr+i) ^ *(ptr+i+1);
            *(ptr+i)   = *(ptr+i) ^ *(ptr+i+1);
            i=(-1); // resetting i to start of array
        }
    }
    cout<<"\nSorted Array : ";
    for(int i=0;i<SIZE;i++)
        cout<<*(ptr+i)<<" ";
    return 0;
}