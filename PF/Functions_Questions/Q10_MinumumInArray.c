#include<stdio.h>

// Function Declarations
int minValue(int arr[],int size); // Parameters : (1 integer array & 1 integer) & Returns : (1 integer)

// Main Function
void main()
{
    int size; // declaring size of array
    printf("Enter the number of elements of array : ");
    scanf("%d",&size); // reading size
    int arr[size]; // declaring array
    printf("Enter %d elements of array : ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]); // reading array
    }
    int answer=minValue(arr,size); // saving returned value of minValue function in answer
    printf("Minimum Value in array is %d",answer); // displaying answer
}

// Function Definitions
int minValue(int arr[],int size)
{
    int min=arr[0]; // initialising min with first value of array
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min) // if smaller value is detected in array
            min=arr[i]; // updating min
    }
    return min; // returning min
}