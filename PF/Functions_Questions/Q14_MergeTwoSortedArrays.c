#include<stdio.h>

// Function Declarations
void mergeArray(int arr[],int size,int arr2[],int size2); // Parameters : (2 integer arrays & 2 integers) & Returns : (void)

// Main Function
void main()
{
    int size; // declaring size of arr
    printf("Enter size of array 1 : ");
    scanf("%d",&size); // reading size
    int arr[size]; // declaring arr
    printf("Enter array 1 (sorted) : ");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]); // reading arr
    int size2; // declaring size of arr2
    printf("Enter size of array 2 : ");
    scanf("%d",&size2); // reading size2
    int arr2[size2]; // declaring arr2
    printf("Enter array 2 (sorted) : ");
    for(int i=0;i<size2;i++)
        scanf("%d",&arr2[i]); // reading arr2
    mergeArray(arr,size,arr2,size2); // calling mergeArray function while passing arr,size,arr2 and size2 as arguments
}

// Function Definitions
void mergeArray(int arr[],int size,int arr2[],int size2)
{
    int size3=size+size2; // declaring size of mergedArr
    int mergedArr[size3]; // declaring mergedArr
    for(int i=0;i<size3;i++)
    {
        if(i<size)
            mergedArr[i]=arr[i]; // writing first segment with arr elements
        else
            mergedArr[i]=arr2[i-size]; // writing second segment with arr2 elements
    }
    for(int i=1;i<size3;i++) // sorting whole after merged
    {
        if(mergedArr[i]<mergedArr[i-1]) // larger value detected
        {
            // swapping algorithm using indexes
            mergedArr[i] = mergedArr[i] + mergedArr[i-1];   // a = a + b
            mergedArr[i-1] = mergedArr[i] - mergedArr[i-1]; // b = a - b
            mergedArr[i] = mergedArr[i] - mergedArr[i-1];   // a = a - b
            i=0; // resetting i
        }
    }
    printf("Merged Array : ");
    for(int i=0;i<size3;i++)
        printf("%d ",mergedArr[i]); // displaying mergedArr
}