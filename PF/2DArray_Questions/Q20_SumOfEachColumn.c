#include<stdio.h>
void main()
{
    int matR,matC; // declaring rows and columns of matrix
    printf("Enter Rows : ");
    scanf("%d",&matR); // reading number of rows of matrix
    printf("Enter Columns : ");
    scanf("%d",&matC); // reading number of columns of matrix
    int mat[matR][matC]; // declaring matrix
    int colSum[matC]; // declaring colSum (to track sum of column elements)
    for(int i=0;i<matC;i++)
        colSum[i]=0; // setting all elements of colSum to 0 (0 is additive identity)
    printf("Enter matrix :\n");
    for(int i=0;i<matR;i++)
    {
        for(int j=0;j<matC;j++)
        {
            scanf("%d",&mat[i][j]); // reading matrix
            colSum[j]+=mat[i][j]; // adding sums of column elements
        }
    }
    printf("Sum of Columns :\n");
    for(int i=0;i<matC;i++)
        printf("Sum of Column %d is %d\n",i+1,colSum[i]); // displaying sum of each column
}