#include<iostream>
using namespace std;
int main()
{
    char str[101];
    cout<<"Enter a string : ";
    cin.getline(str,101);
    int vowels=0;
    int *counter=&vowels;
    char *ptr=str;
    for(int i=0;*(ptr+i)!='\0';i++)
        switch(*(ptr+i))
        {
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                (*counter)++;
        }
    cout<<"Vowels : "<<*counter;
    return 0;
}