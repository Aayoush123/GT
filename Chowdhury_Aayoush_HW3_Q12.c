#include <stdio.h>
int reverse_numbers_while(int n)
{
    int reverse = 0;
    int num = 0;
    while (n > 0)
    {
        num = n % 10;
        reverse = reverse * 10 + num;
        n = n / 10;
        
    }
    return reverse;
}
int reverse_digits_recursive(int n, int reverse) 
{
    if (n == 0) 
    {
        return reverse;
    } 
    else 
    {
        int nums = n % 10;
        reverse = reverse * 10 + nums;
        return reverse_digits_recursive(n / 10, reverse);
    }
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int reversed_number =reverse_numbers_while(number);
    printf("Reversed number usin while loop: %d\n", reversed_number);
    int reversed = reverse_digits_recursive(number, 0);  
    printf("Reversed number using recursion: %d\n", reversed);
    return 0;

    
}