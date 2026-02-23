#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Number Of Words : ";
    cin>>size;
    // Demonstrating use of "Double Pointer"
    char **words=new char*[size];
    for(int i=0;i<size;i++)
        *(words+i)=new char[101];
    cout<<"Enter Words :\n";
    for(int i=0;i<size;i++)
    {
        cout<<"Word "<<i+1<<" : ";
        cin>>*(words+i);
    }
    cout<<"Entered Words :\n";
    for(int i=0;i<size;i++)
    {
        cout<<"Word "<<i+1<<" : "<<*(words+i)<<endl;
        delete[] *(words+i);
        *(words+i)=nullptr;
    }
    delete[] words;
    words=nullptr;
    return 0;
}