#include "main.h"
/**
 * reverseArray - descr.
 * @array: array to be reversed
 * @size: size of array
 * Return: 0
 */
void reverseArray(int *array, int size)
{
    int i;
    int *reversed[size];

    printf("size: %d\n", size);

    for (i = 0; i <= size; i++)
    {
        reversed[i] = array[size - 1];
        printf("inside for loop 1\n");
        printf("size: %d\n", size);
        printf("reversed: ");
        for (int k = 0; k < 4; k++)
        {
            printf("%d", reversed[i]);
        }
        putchar('\n');
        size--;
    }

    return (0); 
}
