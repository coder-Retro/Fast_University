#include<stdio.h>
void main()
{
    int matArows,matAcols,matBrows,matBcols; // declaring dimensions of matices
    printf("Enter rows of matrix A : ");
    scanf("%d",&matArows); // reading rows of matrix A
    printf("Enter columns of matrix A : ");
    scanf("%d",&matAcols); // reading columns of matrix A
    printf("Enter rows of matrix B : ");
    scanf("%d",&matBrows); // reading rows of matrix B
    printf("Enter columns of matrix B : ");
    scanf("%d",&matBcols); // reading columns of matrix B
    if(matArows==matBrows&&matAcols==matBcols) // A rows&cols are equal to B rows&cols (eligibility condition for subtraction)
    {
        int matA[matArows][matAcols]; // declaring matrix A
        int matB[matBrows][matBcols]; // declaring matrix B
        printf("Enter elements of matrix A :\n");
        for(int i=0;i<matArows;i++)
            for(int j=0;j<matAcols;j++)
                scanf("%d",&matA[i][j]); // reading matrix A
        printf("Enter elements of matrix B :\n");
        for(int i=0;i<matBrows;i++)
            for(int j=0;j<matBcols;j++)
                scanf("%d",&matB[i][j]); // reading matrix B
        printf("Subtracted Matrix :\n");
        int subtractedMatrix[matArows][matAcols]; // declaring subtractedMatrix
        for(int i=0;i<matArows;i++)
        {
            for(int j=0;j<matAcols;j++)
            {
                subtractedMatrix[i][j]=matA[i][j]-matB[i][j]; // subtracting matA and matB & saving in subtractedMatrix
                printf("%d ",subtractedMatrix[i][j]); // displaying subtractedMatrix
            }
            printf("\n"); // breaking line after each row
        }
    }
    else // A rows&cols are not equal to B rows&cols (cant b subtracted)
    {
        printf("Matrices with these dimensions can't be subtracted !");
    }
}