#include <stdio.h>

void fizzBuzz(int n)
{
    int i;

    for(i = 1; i <= n; i++)
    {
        if ((i % 3) && (i % 5))
        {
            printf("%d", i);
        }
        if (!(i % 3))
        {
            printf("Fizz");
        }
        if (!(i % 5))
        {
            printf("Buzz");
        }
        printf("\n");
    }
}

int main(void)
{
        fizzBuzz(50);
        return (0);
}
