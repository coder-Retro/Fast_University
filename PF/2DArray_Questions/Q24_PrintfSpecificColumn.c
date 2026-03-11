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
    int targetC; // declaring target column variable
    printf("Column to Print : ");
    scanf("%d",&targetC); // reading targetC
    printf("Column :\n");
    for(int i=0;i<matR;i++)
        printf("%d ",mat[i][targetC-1]); // displaying target column using mat[i][targetC-1]
}