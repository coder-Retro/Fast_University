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
        colSum[i]=0; // setting all elements of colSum to 0
    printf("Enter matrix :\n");
    for(int i=0;i<matR;i++)
    {
        for(int j=0;j<matC;j++)
        {
            scanf("%d",&mat[i][j]); // reading matrix
            colSum[j]+=mat[i][j]; // adding sums of column elements
        }
    }
    int maxSum=0; // declaring maxSum (to track hightest sum of column elements)
    int maxSumCol; // declaring maxSumCol (to track ith column with highest sum of elements of column)
    for(int i=0;i<matC;i++)
        if(colSum[i]>maxSum) // greater column elements sum is detected
        {
            maxSum=colSum[i]; // updating maxSum
            maxSumCol=i+1; // updating maxSumCol
        }
    printf("Column with max sum of elements if Column %d",maxSumCol); // displaying column with max sum of elements
}