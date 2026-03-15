/*
Run the following command in the terminal before running the code :
chcp 65001
otherwise emojies cant be displayed in terminal
*/
#include<stdio.h>
void main()
{
    for(int i=1;i<=8;i++) // rows of board
    {
        for(int j=1;j<=8;j++) // columns of board
        {
            if(i%2==0) // if row is even
                if(j%2==0) // if column if even
                    printf("⬛");
                else // if column if odd
                    printf("⬜");
            else // if row is odd
                if(j%2!=0) // if column is odd
                    printf("⬛");
                else // if column is even
                    printf("⬜");
        }
        printf("\n"); // breaking line after each row
    }
}