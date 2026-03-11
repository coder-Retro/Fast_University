#include<stdio.h>

// Function Declaratations
void removeDup(int *a,int *b); // Parameters : (2 memory addresses) & Returns : (void)

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
    removeDup(arr,&size); // calling removeDup function while passing arr and size as arguments
    printf("\nUpdated Array : ");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]); // displaying array
}

// Function Definitions
void removeDup(int *a,int *b)
{
    for(int i=0;i<*b-1;i++) // checking array for each element's duplicates
    {
        for(int j=i+1;j<*b;j++) // walking j through whole array to detect duplicates of arr[i]
        {
            if(a[i]==a[j]) // duplicate detected
            {
                for(int k=j;k<*b-1;k++) // taking duplicate to last index by swapping algorithm
                {
                    a[k] = a[k+1]; // destroying duplicate & performing left shift on remaining array
                }
                *b-=1; // removing last index from array
                j--; // resetting j previous index
            }
        }
    }
}