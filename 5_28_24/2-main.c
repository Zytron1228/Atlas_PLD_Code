#include "main.h"
/**
 * main - descr.
 *
 * Return: 0
 */
void reverseArray(int* array, int size)
{
	int i = size;
	int n = 0;

	while (n <= size / 2)
	{
		int temp = array[n];
		array[n] = array[i];
		array[i] = temp;
		n++;
		i--;
	}
}
