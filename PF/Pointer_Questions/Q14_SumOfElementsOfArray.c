#include<stdio.h>
void main()
{
    int size; // declaring size of array
    printf("Enter size of array : ");
    scanf("%d",&size); // reading size
    int arr[size]; // declaring array
    int *p; // declaring pointer
    p=arr; // assigning base address of array to pointer
    printf("Enter array : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",p); // reading array
        p++; // updating pointer to next address of array
    }
    p-=size; // resetting pointer to base address of array
    for(int i=1;i<size;i++)
    {
        *p += *(p+i); // accumulating sum of array elements on 0 index of array
    }
    printf("Sum of elements : %d",*p); // writing sum
}