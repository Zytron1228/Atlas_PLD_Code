#include "main.h"

int vowelCount(char* string)
{
    int i;
    int vowels = 0;
    int length;

    for (length = 0; string[length] != '\0'; length++)
    {}

    for (i = 0; i < length; i++)
    {
        char s = string[i];
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U')
            vowels++;
    }

    return (vowels);
}