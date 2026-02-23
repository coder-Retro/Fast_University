#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    srand(time(0));
    const int SIZE=5;
    int arr[SIZE];
    int max=INT_MIN;
    int *answer=&max;
    int *ptr=arr;
    cout<<"Array : ";
    for(int i=0;i<SIZE;i++)
    {
        *(ptr+i)=rand()%100; // Filling Up Array with Randoms
        cout<<*(ptr+i)<<" "; // Displaying Elements
        if(*(ptr+i)>*answer) // Greater value detected
            *answer = *(ptr+i); // Updating max
    }
    cout<<"\nMax Value : "<<*answer;
    return 0;
}