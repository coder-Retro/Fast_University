#include<stdio.h>
void main()
{
    int matrix[3][3]; //  declaring 3x3 2D array
    int transpose[3][3]; // declaring transpose matrix
    printf("Enter elements of 3x3 matrix :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]); // reading elements of 2D array
            transpose[j][i]=matrix[i][j]; // creating transpose matrix
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ",transpose[i][j]); // displaying transpose matrix
        printf("\n"); // breaking line after each row
    }
}