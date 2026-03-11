#include<stdio.h>
void main()
{
    int matArows,matAcols,matBrows,matBcols; // declaring dimensions of both matrices
    printf("Enter rows of Matrix A : ");
    scanf("%d",&matArows); // reading rows of matrix A
    printf("Enter columns of Matrix A : ");
    scanf("%d",&matAcols); // reading columns of matrix A
    printf("Enter rows of Matrix B : ");
    scanf("%d",&matBrows); // reading rows of matrix B
    printf("Enter columns of Matrix B : ");
    scanf("%d",&matBcols); // reading columns of matrix B
    if(matAcols==matBrows) // A columns are equal to B rows (condition of eligibility)
    {
        int matA[matArows][matAcols]; // declaring matrix A
        int matB[matBrows][matBcols]; // declaring matrix B
        printf("Enter elements of Matrix A (%dx%d) :\n",matArows,matAcols);
        for(int i=0;i<matArows;i++)
            for(int j=0;j<matAcols;j++)
                scanf("%d",&matA[i][j]); // reading matrix A
        printf("Enter elements of Matrix B (%dx%d) :\n",matBrows,matBcols);
        for(int i=0;i<matBrows;i++)
            for(int j=0;j<matBcols;j++)
                scanf("%d",&matB[i][j]); // reading matrix B
        printf("Multiplicated Matrix :\n");
        int multiplication[matArows][matBcols]; // declaring multiplicated matrix
        for(int i=0;i<matArows;i++)
        {
            for(int j=0;j<matBcols;j++)
            {
                multiplication[i][j]=0; // setting multiplacation[i][j] to 0
                for(int k=0;k<matAcols;k++)
                    multiplication[i][j]+=(matA[i][k]*matB[k][j]); // summing products of respective rows and columns
                printf("%d ",multiplication[i][j]); // writing multiplicated matrix
            }
            printf("\n"); // breaking line after each row
        }
    }
    else // A columns are not equal to B rows (cant b multiplied)
    {
        printf("Matrices with theses dimensions can't be multiplied !");
    }
}