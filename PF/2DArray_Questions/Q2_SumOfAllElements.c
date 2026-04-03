#include<stdio.h>
void main()
{
    int matrix[3][3]; //  declaring 3x3 2D array
    int sum=0; // declaring sum variable
    printf("Enter elements of 3x3 matrix :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]); // reading elements of 2D array
            sum+=matrix[i][j]; // adding to sum
        }
    }
    printf("Sum is : %d",sum); // displaying sum
}