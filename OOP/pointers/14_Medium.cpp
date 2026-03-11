#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Number of Strings : ";
    cin>>size;
    // Memory Allocation
    char **ptr=new char*[size];
    for(int i=0;i<size;i++)
        *(ptr+i)=new char[101];
    // Reading Strings
    cout<<"Enter Strings :\n";
    for(int i=0;i<size;i++)
    {
        cout<<"String "<<i+1<<" : ";
        cin>>*(ptr+i);
    }
    // Sorting Strings
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(strcmp(*(ptr+j),*(ptr+j+1))>0)
            {
                char *temp = *(ptr+j);
                *(ptr+j)   = *(ptr+j+1);
                *(ptr+j+1) = temp;
            }
        }
    }
    // Sorted Strings
    cout<<"Sorted Strings :\n";
    for(int i=0;i<size;i++)
        cout<<"String No "<<i+1<<" : "<<*(ptr+i)<<endl;
    // Memory Deallocation
    for(int i=0;i<size;i++)
    {
        delete[] *(ptr+i);
        *(ptr+i)=nullptr;
    }
    delete[] ptr;
    ptr=nullptr;
    return 0;
}