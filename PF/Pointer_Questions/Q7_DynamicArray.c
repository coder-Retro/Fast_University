#include<stdio.h>
#include<stdlib.h> // malloc(); & free();
void main()
{
    int *a; // declaring pointer for dynamic memory allocation
    int size; // declaring size of array;
    printf("Enter size of array : ");
    scanf("%d",&size); // reading size
    a=malloc(size*sizeof(int)); // allocating dynamic memory to pointer for dynamic array
    printf("Enter array : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",a); // reading dynamic array
        a++; // updating pointer to next address of dynamic array
    }
    a-=size; // resetting pointer to base address of dynamic array
    printf("Array : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",*a); // writing dynamic array
        a++; // updating pointer to next address of dynamic array
    }
    a-=size; // resetting pointer to base address of dynamic array
    free(a); // deallocating dynamic memory from pointer
}