#include<stdio.h>
void main()
{
    int matR,matC; // declaring rows and columns of matrix
    printf("Enter rows : ");
    scanf("%d",&matR); // reading number of rows
    printf("Enter columns : ");
    scanf("%d",&matC); // reading number of columns
    int mat[matR][matC]; // declaring matrix
    int flatSize=matR*matC; // declaring size of flat array
    int flatArray[flatSize]; // declaring flat array
    int writer=0; // declaring variable to write the indexes of flat array
    printf("Enter Matrix :\n");
    for(int i=0;i<matR;i++)
        for(int j=0;j<matC;j++)
        {
            scanf("%d",&mat[i][j]); // reading matrix
            flatArray[writer]=mat[i][j]; // writing flat array using writer
            writer++; // updating writer
        }
    printf("Flat 1D array :\n");
    for(int i=0;i<writer;i++)
        printf("%d ",flatArray[i]); // displaying flat array
}