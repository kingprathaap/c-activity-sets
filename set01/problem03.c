#include<stdio.h>
int input();
int add(int c, int d);
void output(int c, int d, int sum);
int main()
{
  int c,d,sum;
  c=input();
  d=input();
  sum=add(c,d);
  output(c,d,sum);
  return 0;
}
int input()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int add(int c, int d)
{
  int sum=c+d;
  return sum;
}
void output(int c, int d, int sum)
{
 printf("the sum of %d and %d is %d",c,d,sum);
}