#include <stdio.h>
void input(int *c, int *d);
void add(int c, int d, int *sum);
void output(int c, int d, int sum);

void input(int *c, int *d)
{
    printf("enter the value of a\n");
    scanf("%d",c);
    printf("enter the value of b\n");
    scanf("%d",d);
}
void add(int c, int d, int *sum)
{
    *sum=c+d;
}
void output(int c, int d, int sum)
{
    printf("the sum of %d and %d is %d",c,d,sum);
}
int main()
{
    int c,d,sum;
    input(&c, &d);
      add(c,d,&sum);
    output(c,d,sum);
    return 0;
}
