//2. Write a C program to add two numbers.

#include <stdio.h>
int main()
{
    int c,d,sum;
    printf("Enter the value of a\n");
    scanf("%d",&c);
    printf("Enter the value of b\n");
    scanf("%d",&d);
    sum=c+d;
    printf("The sum of %d and %d is %d",c,d,sum);
    return 0;
}