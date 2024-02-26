#include <stdio.h>
#include <math.h>


int gcd(int a, int b)
{
    int result;

    if (a < b) 
    {
        result = a;
    } 
    else 
    {
        result = b;
    }

    while (result > 0) 
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
     
     return result;
}

int main()

{
    int a = 12, b = 16;
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}