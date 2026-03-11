#include<stdio.h>
void main()
{
    int size; // declaring size of matrix
    printf("Enter size of Identity Matrix : ");
    scanf("%d",&size); // reading size
    int idmat[size][size]; // declaring identity matrix
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            if(i==j)
                idmat[i][j]=1; // setting diagonal values to 1
            else
                idmat[i][j]=0; // setting non-diagonal values to 0
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
            printf("%d ",idmat[i][j]); // displaying identity matrix
        printf("\n"); // breaking line after each row
    }
}