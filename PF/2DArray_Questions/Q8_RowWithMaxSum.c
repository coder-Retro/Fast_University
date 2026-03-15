#include<stdio.h>
void main()
{
    int matR,matC; // declaring rows and columns
    printf("Enter Rows : ");
    scanf("%d",&matR); // reading number of rows of matrix
    printf("Enter Columns : ");
    scanf("%d",&matC); // reading number of columns of matrix
    int mat[matR][matC]; // declaring matrix
    int sum; // declaring sum (to track sum of row elements)
    int maxSum=0; // declaring maxSum (to track highest sum of row elements)
    int maxSumRow; // declaring maxSumRow (to track ith row with highest sum of row elements)
    printf("Enter matrix :\n");
    for(int i=0;i<matR;i++)
    {
        sum=0; // setting sum to 0 in each iteration of outer loop
        for(int j=0;j<matC;j++)
        {
            scanf("%d",&mat[i][j]); // reading matrix
            sum+=mat[i][j]; // calculating sum of row elements
        }
        if(sum>maxSum) // if sum of row elements is greater than max sum
        {
            maxSum=sum; // updating maxSum
            maxSumRow=i+1; // updating maxSumRow
        }
    }
    printf("Row with Maximum Sum is Row %d",maxSumRow); // displaying row with maximum sum
}