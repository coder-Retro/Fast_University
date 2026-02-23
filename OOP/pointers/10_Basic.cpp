#include<iostream>
#include<string>
using namespace std;
int main()
{
    char str[101];
    char *ptr=str;
    cout<<"Original String : ";
    cin.getline(ptr,101);
    // Calculating length of string
    int len=0;
    for(int i=0;*(ptr+i)!='\0';i++)
        len++;
    // Reversing String
    for(int i=0,j=len-1;i<j;i++,j--)
    {
        // Swapping using pointers and bitwise XOR operator
        *(ptr+i) = *(ptr+i) ^ *(ptr+j);
        *(ptr+j) = *(ptr+i) ^ *(ptr+j);
        *(ptr+i) = *(ptr+i) ^ *(ptr+j);
    }
    cout<<"Reversed String : "<<ptr;
    return 0;
}