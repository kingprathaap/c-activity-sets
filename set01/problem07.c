//Write a C program to find sum of all natural numbers until n
#include<stdio.h>
int input_n();
int sum_n_nos(int x,int sum);
void output(int x, int sum);
int main()
{
    int x,sum=0;
    x=input_n();
    sum=sum_n_nos(x,sum);
    output(x,sum);
    return 0;
}
int input_n()
{
    int b;
    printf("Enter the value of n:\n");
    scanf("%d",&b);
    return b;
}
int sum_n_nos(int x,int sum)
{
    int l;
   for(l=1;l<=x;l++)
    {
        sum=sum+l;    
    }
    return sum;
}
void output(int x, int sum)
{
    printf("The sum of %d is %d\n",x,sum);
}