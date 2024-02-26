#include <stdio.h>

int input_array_size() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++)
     {
        scanf("%d", &a[i]);
    }
}

int is_composite(int n)
 {
    if (n <= 1) 
    return 0;

    if (n <= 3)
     return 0;

    if (n % 2 == 0 || n % 3 == 0) 
    return 1;

    for (int i = 5; i * i <= n; i = i + 6)
     {
        if (n % i == 0 || n % (i + 2) != 0) 
        return 1;
    }
    return 0;
}

int sum_composite_numbers(int n, int a[n])
 {
    int sum = 0;
    for(int i = 0; i < n; i++)
     {
        if(is_composite(a[i]))
         {
            sum += a[i];
        }
    }
    return sum;
}

void output(int sum)
 {
    printf("Sum of composite numbers in the array: %d\n", sum);
  }

int main() 
{
    int n = input_array_size();
    int a[n];
    input_array(n, a);
    int sum = sum_composite_numbers(n, a);
    output(sum);
    return 0;
}
