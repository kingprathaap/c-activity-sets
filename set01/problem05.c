#include<stdio.h>
int input();
int compare(int c, int d, int e);
void output(int c, int d, int e, int largest);
int input()
{
    int y;
    printf("enter the first number");
    scanf("%d",&y);
    return y;
}
int compare(int c, int d, int e)
{
    int largest;

    if (c>=d && c>=e)
    {
        largest = c;
    }
    else if (d>=c && d>=e)
    {
        largest = d;
    }
    else if (e>=c && e>d)
    {
        largest = e;
    }
    else
    {
        printf("they are equal");

    }
    return largest;
}
void output(int c, int d, int e, int largest)
{
    if(c==d&&d==e)
    {
    printf("they are equal");
    }
    else
    {
    printf("the largest btw %d and %d and %d is %d",c,d,e,largest);
    }
}
int main()
{
    int c,d,e,largest;
    c=input();
    d=input();
    e=input();
    largest=compare(c,d,e);
    output(c,d,e,largest);

}

