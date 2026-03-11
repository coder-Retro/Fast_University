#include<stdio.h>
#include<stdlib.h> // malloc(); & free();
void main()
{
    int matR,matC; // declaring dimensions of 2D array
    printf("Enter Rows : ");
    scanf("%d",&matR); // reading rows of matrix
    printf("Enter Columns : ");
    scanf("%d",&matC); // reading columns of matrix
    int *p; // declaring pointer
    p=malloc(matR*matC*sizeof(int)); // allocating dynamic memory to pointer for 2D array
    printf("Enter Matrix :\n");
    for(int i=0;i<matR;i++)
    {
        for(int j=0;j<matC;j++)
        {
            scanf("%d",p); // reading matrix
            p++; // updating pointer to next address of 2D array
        }
    }
    p-=(matR*matC); // resetting pointer to base address of dynamic 2D Array
    printf("Matrix :\n");
    for(int i=0;i<matR;i++)
    {
        for(int j=0;j<matC;j++)
        {
            printf("%d ",*p); // writing matrix
            p++; // updating pointer to next address of 2D array
        }
        printf("\n"); // breaking line after each row
    }
    p-=(matR*matC); // resetting pointer to base address of dynamic 2D Array
    free(p); // deallocating dynamic memory from pointer
}