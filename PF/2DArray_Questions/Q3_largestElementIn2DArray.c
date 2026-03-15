#include<stdio.h>
void main()
{
    int matrix[3][3]; //  declaring 3x3 2D array
    int largest; // declaring largest variable
    printf("Enter elements of 3x3 matrix :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]); // reading elements of 2D array
            if(i==0&&j==0) // first iteration of both loops
                largest=matrix[i][j]; // initialising largest with first element
            else if(matrix[i][j]>largest) // if larger element is detected
                largest=matrix[i][j]; // updating largest with larger element
        }
    }
    printf("Largest is : %d",largest); // displaying largest
}