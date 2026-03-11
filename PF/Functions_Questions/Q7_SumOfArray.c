#include<stdio.h>

// Function Declarations
int sumOfArray(int arr[],int size); // Parameters : (1 integer array & 1 integer) & Returns : (1 integer)

// Main Function
void main()
{
    int size; // declaring variable for size of array
    printf("Enter Number of Elements in Array : ");
    scanf("%d",&size); // reading size
    int arr[size]; // declaring array
    printf("Enter %d elements of Array : ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]); // reading array
    }
    int answer=sumOfArray(arr,size); // saving returned value of sumOfArray function in answer
    printf("Sum of Array is %d",answer); // displaying answer
}

// Function Definitions
int sumOfArray(int arr[],int size)
{
    int sum=0; // declaring sum variable
    for(int i=0;i<size;i++)
    {
        sum = sum + arr[i]; // summing array elements
    }
    return sum; // returning sum value
}