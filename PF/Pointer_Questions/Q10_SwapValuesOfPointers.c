#include<stdio.h>
void main()
{
    int a,b; // declaring number variables
    printf("Enter value of a : ");
    scanf("%d",&a); // reading a
    printf("Enter value of b : ");
    scanf("%d",&b); // reading b
    int *pa,*pb; // declaring pointers
    pa=&a,pb=&b; // assigning addresses of a and b to pointer *pa and *pb respectively
    printf("Values before Swap :\n");
    printf("a (*pa) : %d\nb (*pb) : %d\n",*pa,*pb);
    // swapping algorithm using pointers
    *pa = *pa + *pb; // a = a + b;
    *pb = *pa - *pb; // b = a - b;
    *pa = *pa - *pb; // a = a - b;
    printf("Values After Swap :\n");
    printf("a (*pa) : %d\nb (*pb) : %d\n",*pa,*pb);
}