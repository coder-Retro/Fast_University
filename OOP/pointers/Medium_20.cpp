#include<iostream>
using namespace std;
int main()
{
    char *str=new char[101];
    cout<<"Enter String : ";
    cin>>str;
    for(int i=0;*(str+i)!='\0';i++)
        *(str+i)=*(str+i)+1;
    cout<<"Adding 1 to Each Character\n"<<"Modified String : "<<str;
    delete[] str; str=nullptr;
    return 0;
}