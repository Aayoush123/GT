#include <stdio.h>
int fibonacci_iterative(int n)
{
    int fib_numbers[n];
    int i;

    fib_numbers[0] = 0;
    fib_numbers[1] = 1;

    for (i = 2; i < n; i++) 
    {
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
    }

    for (i = 0; i < n; i++) 
    {
        printf("%d ", fib_numbers[i]);
    }
}
int fibonacci_recursive(int n) 
{
    if (n == 0) 
    {
        return 0;
    } 
    else if (n == 1) 
    {
        return 1;
    } 
    else 
    {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}


int main()
{
    int num = 40;
    int i;
    printf("Iterative Approach: \n");
    fibonacci_iterative(num);
    printf("\n");
    printf("Recursive Approach: \n");
    for (i = 0; i < num; i++) 
    {
        printf("%d ", fibonacci_recursive(i));
    }
    return 0;

    
}