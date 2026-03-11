#include<stdio.h>
void main()
{
    int matR,matC; // declaring rows and columns of matrix
    printf("Enter rows : ");
    scanf("%d",&matR); // reading number of rows
    printf("Enter columns : ");
    scanf("%d",&matC); // reading number of columns
    int mat[matR][matC]; // declaring matrix
    printf("Enter Matrix :\n");
    for(int i=0;i<matR;i++)
        for(int j=0;j<matC;j++)
            scanf("%d",&mat[i][j]); // reading matrix
    int targetR; // declaring target row variable
    printf("Row to Print : ");
    scanf("%d",&targetR); // reading targetR
    printf("Row :\n");
    for(int i=0;i<matC;i++)
        printf("%d ",mat[targetR-1][i]); // displaying target row using mat[targetR-1][i]
}