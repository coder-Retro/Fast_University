#include<stdio.h>
void main()
{
    int matR,matC; // declaring rows and columns of matrix
    printf("Enter rows : ");
    scanf("%d",&matR); // reading number of rows
    printf("Enter columns : ");
    scanf("%d",&matC); // reading number of columns
    int mat[matR][matC]; // declaring matrix
    int count=0; // declaring count for counting negative elements
    printf("Enter Matrix :\n");
    for(int i=0;i<matR;i++)
        for(int j=0;j<matC;j++)
        {
            scanf("%d",&mat[i][j]); // reading matrix
            if(mat[i][j]<0) // negative element detected
                count++; // updating count
        }
    printf("Number of Negative Elements : %d",count); // diplaying number of negative elements
}