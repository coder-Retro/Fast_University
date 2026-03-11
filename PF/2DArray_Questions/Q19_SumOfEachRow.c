#include<stdio.h>
void main()
{
    int matR,matC; // declaring rows and columns of matrix
    printf("Enter Rows : ");
    scanf("%d",&matR); // reading number of rows of matrix
    printf("Enter Columns : ");
    scanf("%d",&matC); // reading number of columns of matrix
    int mat[matR][matC]; // declaring matrix
    int rowSum[matR]; // declaring rowSum (to track sum of row elements)
    for(int i=0;i<matR;i++)
        rowSum[i]=0; // setting all elements of rowSum to 0 (0 is additive identity)
    printf("Enter matrix :\n");
    for(int i=0;i<matR;i++)
    {
        for(int j=0;j<matC;j++)
        {
            scanf("%d",&mat[i][j]); // reading matrix
            rowSum[i]+=mat[i][j]; // adding sums of row elements
        }
    }
    printf("Sum of Rows :\n");
    for(int i=0;i<matR;i++)
        printf("Sum of Row %d is %d\n",i+1,rowSum[i]); // displaying sum of each row
}