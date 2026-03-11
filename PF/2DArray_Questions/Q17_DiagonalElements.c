#include<stdio.h>
void main()
{
    int matR,matC; // declaring rows and columns of matrix
    printf("Enter rows : ");
    scanf("%d",&matR); // reading number of rows
    printf("Enter columns : ");
    scanf("%d",&matC); // reading number of columns
    int mat[matR][matC]; // declaring matrix
    int diagonal[matR]; // declaring main diagonal array
    int diagonal2[matR]; // declaring secondary diagonal array
    printf("Enter Matrix :\n");
    for(int i=0;i<matR;i++)
    {
        for(int j=0;j<matC;j++)
        {
            scanf("%d",&mat[i][j]); // reading matrix
            if(i==j) // main diagonal condition
                diagonal[i]=mat[i][j]; // saving main diagonal elements in diagonal array
            if(j==matC-i-1) // secondary diagonal condition
                diagonal2[i]=mat[i][j]; // saving secondary diagonal elements in diagonal2 array
        }
    }
    printf("Main Diagonal Elements : ");
    for(int i=0;i<matR;i++)
        printf("%d ",diagonal[i]); // displaying diagonal array
    printf("\nSecondary Diagonal Elements : ");
    for(int i=0;i<matR;i++)
        printf("%d ",diagonal2[i]); // displaying diagonal2 array
}