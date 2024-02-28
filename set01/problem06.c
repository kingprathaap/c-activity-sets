//Write a C program to compare three numbers using *pass by reference*
#include<stdio.h>

void input(int *e, int *f, int *g);
void compare(int e, int f, int g, int *largest);
void output(int e, int f, int g, int largest);

void input(int *e, int *f, int *g)
{
    printf("enter the value of e\n");
    scanf("%d",e);
    printf("Enter the value of f\n");
    scanf("%d",f);
    printf("enter the value of g\n");
    scanf("%d",g);
}
void compare(int e, int f, int g, int *largest)
{
    if(e>=f && e>=g)
    {
        *largest=e;
    }
    else if(f>=e && f>=g)
    {
        *largest=f;
    }
    else
    {
        *largest=g;
    }
}
void output(int e, int f, int g, int largest)
{
    printf("the largest of %d, %d and %d is %d",e,f,g,largest);
}
int main()
{
    int e,f,g,largest;
    input(&e,&f,&g);
    compare(e,f,g,&largest);
    output(e,f,g,largest);
   return 0;
}