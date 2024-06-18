#include <stdio.h>
#include <string.h>

/**
 * str_change_case - makes all letters in a given string lowercase or uppercase
 *
 * @s: string provided
 * @upper: if 1, uppercase all letters, if 0, lowercase them.
 * @uprFunc: pointer function to lowercase func
 * @lwrFunc: pointer function to uppercase func
 *
 * Return: the new modified string
 */
char *str_change_case(char *s, int upper, char *(*uprFunc)(char *), char *(*lwrFunc)(char *))
{
	if (upper == 1)
		return uprFunc(s);
	if (upper == 0)
		return lwrFunc(s);
	printf("error: please specify upper as 1 or 0.\n");
	return (s);
}

/**
 * uppercase_string - makes a string uppercase
 * note: this changes the actual string itself AND returns it. This does not
 * preserve the string's original value
 * @str: string to make uppercase
 * Return: string in all caps
 */
char *uppercase_string(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}

/**
 * lowercase_string - makes a string lowercase
 * note: this changes the actual string itself AND returns it. This does not
 * preserve the string's original value
 * @str: string to make lowercase
 * Return: string in all lowercase
 */
char *lowercase_string(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
	}
	return (str);
}

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	/* char string[] = "Hello World!"; */
	char string[] = { 72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33 }; /*because it's possible lol*/

	printf("String: \"%s\"\n", string);

	printf("Lowercase string: \"%s\"\n", str_change_case(string, 0, uppercase_string, lowercase_string));

	printf("Uppercase string: \"%s\"\n", str_change_case(string, 1, uppercase_string, lowercase_string));

	printf("Error test plus string: \"%s\"\n", str_change_case(string, 2, uppercase_string, lowercase_string));

	return (0);
}
