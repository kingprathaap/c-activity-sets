#include<stdio.h>
void input(float*base,float*height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main(){
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}
void input(float*base,float*height)
{
    printf("Enter the base value:\n");
    scanf("%f",base);
    printf("Enter the height value:\n");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
    *area=(base * height)/2;
}
void output(float base, float height, float area)
{
    printf("area of triangle with base %f and height %f is %f",base,height,area);
}