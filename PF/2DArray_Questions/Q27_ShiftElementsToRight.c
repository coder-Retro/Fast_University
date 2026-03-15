#include<stdio.h>
void main()
{
    int matR,matC; // declaring dimensions of matrix
    printf("Enter rows : ");
    scanf("%d",&matR); // reading rows
    printf("Enter columns : ");
    scanf("%d",&matC); // reading columns
    int mat[matR][matC]; // declaring matrix
    int shiftMat[matR][matC]; // declaring shifter matrix
    for(int i=0;i<matR;i++)
        for(int j=0;j<matC;j++)
        {
            scanf("%d",&mat[i][j]); // reading matrix
            
            if(j==matC-1&&i!=matR-1) // last column & non last row
                shiftMat[i+1][0]=mat[i][j]; // sending element to first column in next row
            else if(j==matC-1&&i==matR-1) // last column & last row
                shiftMat[0][0]=mat[i][j]; // sending last element to first column in first row
            else // non last column & non last row
                shiftMat[i][j+1]=mat[i][j]; // sending element to next column in same row
        }
    printf("Shifted Matrix :\n");
    for(int i=0;i<matR;i++)
    {
        for(int j=0;j<matC;j++)
            printf("%d ", shiftMat[i][j]); // displaying shifted matrix
        printf("\n"); // breaking line after each row
    }
}