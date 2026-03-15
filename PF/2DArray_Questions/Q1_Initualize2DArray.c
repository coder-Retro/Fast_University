#include<stdio.h>
void main()
{
    int matrix[3][3]; //  declaring 3x3 2D array
    printf("Enter elements of 3x3 matrix :\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&matrix[i][j]); // reading elements of 2D array
    printf("Matrix is :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ",matrix[i][j]); // writing elements of 2D array
        printf("\n"); // breaking line after each row
    }
}