#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() 
{
    int array[10];
    int i, random_number;
    srand(time(0));


    printf("Enter ten integers: ");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 100; i++) 
    {
        random_number = rand() % 10;  
        array[random_number] += 1;  
    }


    printf("Updated Array: ");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}