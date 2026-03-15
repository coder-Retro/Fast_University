#include<stdio.h>

// Size of Array
#define ARR_SIZE 5 

// Function Declaration
void example_function(int *arr, int size); 

void main()
{
    // Array Declaration
    int arr[ARR_SIZE]; 
    printf("Enter %d elements (integers) : ",ARR_SIZE);
    // Reading Array
    for(int i=0;i<ARR_SIZE;i++)
    {
        scanf("%d",&arr[i]); 
    }
    // Passing By Reference (address to pointer)
    example_function(arr,ARR_SIZE); 
}

// Function Definition
void example_function(int *arr,int size) 
{
    printf("Your array is : ");
    // Writing Array
    for(int i=0;i<size;i++,*arr++)
    {
        printf("%d ",*arr); 
    }
}