#include<stdio.h>
#include<stdlib.h>
void main()
{
    int size;
    printf("How many integers u want to store in array : ");
    scanf("%d",&size);
    int *p; // declaring pointer
    p=malloc(size*sizeof(int)); // allocating memory from heap using pointer
    printf("Elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",p); // reading input through pointer
        p++; // updating pointer to next address
    }
    p-=size; // resetting pointer to base address
    for(int i=0;i<size;i++,p++)
        printf("%d ",*p); // writing output through pointer
    p-=size; // resetting pointer to base address
    free(p); // dealocating memory from heap
}