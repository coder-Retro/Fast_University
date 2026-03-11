#include<stdio.h>

// Function Declarations
void selectionSort(int arr[],int size); // Parameters : (1 integer array & 1 integer) & Returns : (void)

// Main Function
void main()
{
    int size; // declaring array size
    printf("Enter number of elements of array : ");
    scanf("%d",&size); // reading size
    int arr[size]; // declaring array
    printf("Enter array : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]); // reading array
    }
    selectionSort(arr,size); // calling selectionSort function while passing arr and size as arguments
}

// Function Definitions
void selectionSort(int arr[],int size)
{
    int target; // declaring target index for selection sort
    for(int i=0;i<size-1;i++) // selection sort algorithm loop
    {
        target=i; // setting target index to i
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[target]) // smaller value detected at j index
                target=j; // saving index to be swapped
        }
        if(target!=i)
        {
            arr[i] = arr[i] + arr[target];      // a = a + b
            arr[target] = arr[i] - arr[target]; // b = a - b
            arr[i] = arr[i] - arr[target];      // a = a - b
        }
    }
    printf("Sorted Array (selection sort) : ");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]); // displaying sorted array
}