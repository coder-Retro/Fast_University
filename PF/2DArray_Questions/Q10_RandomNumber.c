#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    srand(time(0)); // fetching time for seed of random function
    int matR,matC; // declaring rows and columns of matrix
    printf("Enter rows : ");
    scanf("%d",&matR); // reading rows
    printf("Enter columns : ");
    scanf("%d",&matC); // reading columns
    int mat[matR][matC]; // declaring matrix
    for(int i=0;i<matR;i++)
        for(int j=0;j<matC;j++)
        {
            mat[i][j]=rand()%10; // saving random numbers (between 0 and 9) in matrix
        }
    printf("Random Matrix :\n");
    for(int i=0;i<matR;i++)
    {
        for(int j=0;j<matC;j++)
            printf("%d ",mat[i][j]); // displaying matrix
        printf("\n"); // breaking line after each row
    }
}