#include<stdio.h>
void main()
{
    int arr[3]={1,2,3}; // declaring arr
    int *p; // declaring pointer
    p=arr; // assignning address of arr[0] to p
    printf("%d ",*p); // displaying arr[0] using pointer
    p++; // updating p to address of arr[1] through pointer addition
    printf("%d ",*p); // displaying arr[1] using pointer
    p++; // updating p to address of arr[2] through pointer addition
    printf("%d ",*p); // displaying arr[2] using pointer
    printf("\n"); // breaking line
    printf("%d ",*p); // displaying arr[2] using pointer
    p--; // updating p to address of arr[1] through pointer subtraction
    printf("%d ",*p); // displaying arr[1] using pointer
    p--; // updating p to address of arr[0] through pointer subtraction
    printf("%d ",*p); // displaying arr[0] using pointer
}