#include<iostream>
using namespace std;
// Function Prototype
float* calculator(const int *a,const int *b,const char *op);
// Main Function
int main()
{
    int num1,num2;
    char op;
    cout<<"Enter 1st Number : ";
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    cin>>num2;
    cout<<"Enter operation : ";
    cin>>op;
    float *answer=calculator(&num1,&num2,&op);
    if(!answer)
        cout<<"Invalid Inputs !";
    else
        cout<<num1<<" "<<op<<" "<<num2<<" = "<<*answer;
    delete answer; answer=nullptr;
    return 0;
}
// Function Definition
float* calculator(const int *a,const int *b,const char *op)
{
    float *ptr=new float;
    switch(*op)
    {
        case '+': *ptr=(*a + *b); break;
        case '-': *ptr=(*a - *b); break;
        case '*': *ptr=(*a * *b); break;
        case '/': *ptr=((float)*a / *b); break;
        default: ptr=nullptr;
    }
    return ptr;
}