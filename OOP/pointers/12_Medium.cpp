#include<iostream>
using namespace std;
int main()
{
    const int SIZE=100;
    char str1[SIZE+1];
    char *p=str1;
    cout<<"Actual string (str1) (Length <="<<SIZE<<") : ";
    cin.getline(str1,SIZE+1);
    char str2[SIZE+1];
    char *q=str2;
    // Copying str1 into str2 using pointers
    for(int i=0;i<SIZE+1;i++)
    {
        *(q+i)=*(p+i);
        if(*(q+i)=='\0') // End of string reached
            break; // Terminating loop
    }
    cout<<"Copied String (str2) : "<<str2;
    p=nullptr;
    q=nullptr;
    return 0;
}