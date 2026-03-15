#include<stdio.h>
void main()
{
    int mat[2][2]; // declaring 2x2 matrix
    int mainD[2]; // declaring mainDiagonal array
    int secoD[2]; // declaring secondaryDiargonal array
    printf("Enter 2x2 Matrix :\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
        {
            scanf("%d",&mat[i][j]); // reading matrix
            if(i==j) // main diagonal condtion
                mainD[i]=mat[i][j]; // saving elements of main diagonal
            if(j==2-1-i) // secondary daigonal condition
                secoD[i]=mat[i][j]; // saving elements of secondary diagonal
        }
    int determinant=(mainD[0]*mainD[1])-(secoD[0]*secoD[1]); // formula for determinant of 2x2 matrix
    printf("Determinant of 2x2 Matrix : %d",determinant); // displaying determinant
}