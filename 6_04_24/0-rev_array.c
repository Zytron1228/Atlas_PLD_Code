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

    for (i = 0; i <= size; i++)
    {
        reversed[i] = array[i];
    }

    int s = size;
    for (i = 0; i < size; i++)
    {
        s--;
        array[i] = reversed[s];
    }
}
