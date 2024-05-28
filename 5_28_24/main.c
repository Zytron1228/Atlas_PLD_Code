#include "main.h"
#include <stdio.h>

int main(void)
{
	/*1*/
	// printf("%d\n", vowelCount("This string has seven vowels"));
	// printf("%d\n", vowelCount("aEo2hiU."));

	/*2*/
	// int array[] = {1, 2, 3, 4, 5};
	// int i = 1;

	// reverseArray(array, 5);

	// while (i <= 5)
	// {
	// 	printf("%d ", array[i]);
	// 	i++;
	// }

	/*3*/

	printf("%s\n", _strchr("a string C with 1 c hello world.", 'c'));
	printf("memory address: %p\n",  _strchr("a string C with 1 c hello world.", 'c'));

	
	printf("%s\n", _strchr("a string C with 1 C hello world.", 'C'));
	printf("memory address: %p\n", _strchr("a string C with 1 C hello world.", 'C'));

	printf("%s\n", _strchr("a string C with 1 C hello world.", 'c'));
	printf("memory address: %p\n", _strchr("a string C with 1 C hello world.", 'c'));

	printf("%s\n", _strchr("This string is a string.", '2'));
	printf("memory address: %p\n", _strchr("This string is a string.", '2'));

	
	printf("%s\n", _strchr("This s2tring is a string.", '2'));
	printf("memory address: %p\n", _strchr("This s2tring is a string.", '2'));

	return (0);
}
