#include "main.h"
#include <stdio.h>
/**
 * main - descr.
 *
 * Return: 0
 */
int main(void)
{
    int lance[4] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++)
    {
        printf("%d", lance[i]);
    }
    putchar('\n');

    reverseArray(lance, 4);

    for (int i = 0; i < 4; i++)
    {
        printf("%d", lance[i]);
    }
    putchar('\n');

	return (0);
}
