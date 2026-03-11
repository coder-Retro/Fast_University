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
    int target; // declaring target value variable
    int found=0; // taret value existance check
    printf("Value to Find : ");
    scanf("%d",&target); // reading target value
    printf("Value Found at :\n");
    for(int i=0;i<matR;i++)
        for(int j=0;j<matC;j++)
            if(mat[i][j]==target) // target value detected
            {   
                found=1; // updating target value existance check
                printf("Row : %d    Column : %d\n",i+1,j+1); // displaying Row and Column of target value
            }
    if(found==0) // value doesnt exist
        printf("N/A"); // displaying Absence of target value
}