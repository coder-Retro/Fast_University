#include<stdio.h>
void main()
{
    int size; // declaring size of square matrix
    printf("Enter size of square matrix : ");
    scanf("%d",&size); // reading size of square matrix
    int matrix[size][size]; // declaring matrix
    int transpose[size][size]; // declaring transpose
    printf("Enter Matrix :\n");
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
        {
            scanf("%d",&matrix[i][j]); // reading matrix
            transpose[j][i]=matrix[i][j]; // creating transpose
        }
    int symmetric=1; // supposing symmetric until proven wrong
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(matrix[i][j]!=transpose[i][j]) // difference values occurred
            {
                symmetric=0; // difference detected in values of matrix and transpose
                break; // terminating inner loop
            }
        }
        if(symmetric==0) // symmetric is 0
            break; // terminating outer loop
    }
    printf("Matric is %s",(symmetric==1)?"Symmetric":"Not Symmetric"); // displaying respective result
}