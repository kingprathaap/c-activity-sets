//2. Write a C program to add two numbers.

#include <stdio.h>
int main()
{
    int e,d,sum;
    printf("enter the value of a\n");
    scanf("%d",&e);
    printf("Enter the value of b\n");
    scanf("%d",&d);
    sum=e+d;
    printf("The sum of %d and %d is %d",e,d,sum);
    return 0;
}