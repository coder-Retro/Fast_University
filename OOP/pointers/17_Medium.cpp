#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of Array : ";
    cin>>size;
    int *ptr=new int[size];
    cout<<"Enter Array : ";
    for(int i=0;i<size;i++)
        cin>>*(ptr+i);
    // Displaying unique Elements
    bool detected_flag;
    cout<<"Unique Elements : ";
    for(int i=0;i<size;i++)
    {
        detected_flag=false;
        for(int j=0;j<size;j++)
        {
            if(*(ptr+i)==*(ptr+j)&&i!=j)
            {
                detected_flag=true;
                break;
            }
        }
        if(!detected_flag)
        {
            cout<<*(ptr+i)<<" ";
        }
    }
    delete[] ptr;
    ptr=nullptr;
    return 0;
}