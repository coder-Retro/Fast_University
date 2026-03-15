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
            scanf("%d",&mat[i][j]); // reading matrix
    int maxElement[matR]; // declaring maxElement array
    for(int i=0;i<matR;i++)
    {
        for(int j=0;j<matC;j++)
        {
            if(j==0) // first iteration of each row
                maxElement[i]=mat[i][0]; // setting initial value of maxElement[i] to 0-index of j
            else if(mat[i][j]>maxElement[i]) // greater value detected
                maxElement[i]=mat[i][j]; // updating maxElement[i]
        }
    }
    printf("Max Element of Each Row :\n");
    for(int i=0;i<matR;i++)
        printf("Row %d : %d\n",i+1,maxElement[i]); // displaying maxElements array
}