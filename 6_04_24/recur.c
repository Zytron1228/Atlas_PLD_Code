#include <stdio.h>
int main(void)
{
    printf("%d\n", recurFact(4));

	return (0);
}

int recurFact(int n)
{
    if (n <= 1)
    {
        return n;
    }
        // return recurFact(n * (n - 1)); //wrong
        return (n * recurFact(n - 1)); //correct
}