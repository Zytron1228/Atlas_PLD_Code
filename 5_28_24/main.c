#include "main.h"
#include <stdio.h>

int main(void)
{
	int array[] = {1, 2, 3, 4, 5};
	// printf("%d\n", vowelCount("This string has seven vowels"));
	// printf("%d\n", vowelCount("aEo2hiU."));

	reverseArray(array, 5);

	int i = 1;

	while (i <= 5)
	{
		printf("%d ", array[i]);
		i++;
	}

	return (0);
}
