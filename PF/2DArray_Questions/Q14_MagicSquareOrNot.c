#include<stdio.h>
void main()
{
    int size; // length of side of square matrix;
    printf("Enter side of Square Matric : ");
    scanf("%d",&size); // reading size
    int mat[size][size]; // declaring square matrix
    int target=0; // declaring target sum
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
        {
            scanf("%d",&mat[i][j]); // reading matrix
            if(i==0) // first row
                target+=mat[i][j]; // setting target
        }
    int rowSum[size]; // array for row sum values
    int colSum[size]; // array for column sum values
    int mainDiagonalSum=0; // variable for main diagonal sum value (initially 0)
    int secondaryDiagonalSum=0; // variable for secondary diagonal sum value (initially 0)
    for(int i=0;i<size;i++)
    {
        rowSum[i]=0; // setting all sums of rowSum to 0
        colSum[i]=0; // setting all sums of colSum to 0
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            rowSum[i]+=mat[i][j]; // summing rows using i
            colSum[j]+=mat[i][j]; // summing columns using j
            if(i==j) // condition for main diagonal
                mainDiagonalSum+=mat[i][j]; // summing main daigonal
            if(j==size-i-1) // condition for secondary diagonal
                secondaryDiagonalSum+=mat[i][j]; // summing secondary diagonal
        }
    }
    int magic=1; // assuming magic untill proven wrong
    if(mainDiagonalSum==target&&secondaryDiagonalSum==target) // both diagonal sums are equal to target
        for(int i=0;i<size;i++)
        {
            if(rowSum[i]!=target||colSum[i]!=target)
            {
                magic=0; // difference of sums detected
                break; // magic status proven wrong so breaking loop
            }
        }
    else
    {
        magic=0; // difference of sums detected
    }
    printf("2D array is %s",(magic==1)?"a Magic Square":" not a Magic Square"); // displaying result
}