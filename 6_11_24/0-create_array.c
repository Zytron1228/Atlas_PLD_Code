#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char acter)
{
	char *string;
	int i;

	if (!size)
		return NULL;

	string = malloc(sizeof(char) * size + 1);

	if (!string)
		return NULL;

	for (i = 0; i < size; i++)
	{
		string[i] = acter;
		acter++;
	}

	string[size] = '\0';

	return (string);
}

int main(void)
{
	char *bird = create_array(5, 'c');
	printf("%s\n", bird);
	free(bird);

	return (0);
}