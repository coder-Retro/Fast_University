#include<stdio.h>

// Function Declarations
int secondLargest(int arr[],int size); // Parameters : (1 integer array & 1 integer) & Returns : (1 integer)

// Main Function
void main()
{
    int size; // declaring size of array
    printf("Enter size of array : ");
    scanf("%d",&size); // reading size
    int arr[size]; // declaring array
    printf("Enter array : ");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]); // reading array
    int answer=secondLargest(arr,size); // saving returned value of secondLargest function in answer
    printf("Second Largest Element is %d",answer); // displaying answer
}

// Function Definitions
int secondLargest(int arr[],int size)
{
    for(int i=1;i<size;i++) // descending sort algorithm
    {
        if(arr[i]>arr[i-1]) // larger element detected at arr[i]
        {
            // swapping algorithm using array indexes
            arr[i] = arr[i] + arr[i-1];   // a = a + b
            arr[i-1] = arr[i] - arr[i-1]; // b = a - b
            arr[i] = arr[i] - arr[i-1];   // a = a - b
            i=0; // resetting i to 0
        }
    }
    // array has been sorted in descending order
    for(int i=1;i<size;i++)
    {
        if(arr[i]!=arr[i-1]) // second largest element detected
        {
            return arr[i]; // returing second largest element
        }
    }
    return arr[0]; // whole array contains same value so second largest doesnt exist
}