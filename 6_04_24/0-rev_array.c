#include "main.h"
#include <stdio.h>
/**
 * reverseArray - descr.
 * @array: array to be reversed
 * @size: size of array
 * Return: 0
 */
void reverseArray(int *array, int size)
{
    int i;
    int reversed[size];

    printf("size: %d\n", size);

        printf("reversed: ");
        for (int k = 0; k < 4; k++)
        {
            printf("%d, ", reversed[k]);
        }
        putchar('\n');

    for (i = 0; i <= size; i++)
    {
        reversed[i] = array[i];
        printf("inside for loop 1\n");
        printf("size: %d\n", size);
        printf("reversed: ");
        for (int k = 0; k < 4; k++)
        {
            printf("%d, ", reversed[k]);
        }
        putchar('\n');
    }
    int s = size;

    printf("before for loop 2\n");
    printf("size: %d\n", size);

    for (int n = 0; n < size; n++)
    {
        printf("inside for loop 2\n");
        printf("size: %d\n", size);
        printf("s: %d\n", s);
        array[n] = reversed[s - 1];
        s--;
        printf("array: ");
        for (int j = 0; j < 4; j++)
        {
            printf("%d, ", array[j]);
        }
        putchar('\n');
    }
}
