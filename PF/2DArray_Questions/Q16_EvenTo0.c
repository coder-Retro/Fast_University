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
        {
            scanf("%d",&mat[i][j]); // reading matrix
            if(mat[i][j]%2==0) // even element detected
                mat[i][j]=0; // setting even element to 0
        }
    printf("Updated Matrix :\n");
    for(int i=0;i<matR;i++)
    {
        for(int j=0;j<matC;j++)
            printf("%d ",mat[i][j]); // displaying updated matrix
        printf("\n"); // breaking line after each row
    }
}