#include "main.h"
/**
 * main - descr.
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *pntr;
	int isLowercase = 0;
	int isUppercase = 0;

	if ((c >= 'a' && c <= 'z'))
		isLowercase = 1;
	else if (c >= 'A' && c <= 'Z')
		isUppercase = 1;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			pntr = &s[i];
			return pntr;
		}
		if (isLowercase)
		{
			if (s[i] == c + 32)
			{
				pntr = &s[i];
				return pntr;
			}
		}
		else if (isUppercase)
		{
			if (s[i] == c - 32)
			{
				pntr = &s[i];
				return pntr;
			}
		}
		i++;
	}
		pntr = &s[i];
		return pntr;
}
