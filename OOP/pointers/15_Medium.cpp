#include<iostream>
using namespace std;
// Function Prototype
int sum(int *arr,int size);
// Main Function
int main()
{
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    if(size>-1)
    {
        int *arr=new int[size];
        cout<<"Enter Array : ";
        for(int i=0;i<size;i++)
            cin>>*(arr+i);
        int answer=sum(arr,size);
        delete[] arr;
        arr=nullptr;
        if(size==0) cout<<endl;
        cout<<"Sum Of Elements : "<<answer;
    }
    else cout<<"Invalid Size Entered !";
    return 0;
}
// Function Definition
int sum(int *arr,int size)
{
    int answer=0;
    for(int i=0;i<size;i++)
        answer+=*(arr+i);
    return answer;
}