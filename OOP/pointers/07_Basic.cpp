#include<iostream>
using namespace std;
// Function Prototypes
int* sumTwoNums(int *a,int *b);
// Main Function
int main()
{
    int num1=5,num2=10;
    int *ptr=sumTwoNums(&num1,&num2);
    // Dereferencing the address returned by sumTwoNums
    cout<<"Sum : "<<*ptr;
    delete ptr; ptr=nullptr;
    return 0;
}
// Function Definitions
int* sumTwoNums(int *a,int *b)
{
    int *ptr=new int(*a + *b);
    return ptr;
}