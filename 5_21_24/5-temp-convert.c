#include <stdio.h>
/**
 * Betty = null
 */
int main(void)
{
	float tempInput;
	float tempOutput;
	char convertFrom;
	char convertTo = '0';

	while (convertTo == '0')
	{
	printf("Which temperature would you like to convert FROM? (C/F): ");
	scanf("%c", &convertFrom);
	if (convertFrom == 'c' || convertFrom == 'C')
		convertTo = 'F';
	else if (convertFrom == 'f' || convertFrom == 'F')
                convertTo = 'C';
	else
		printf("Please type \"C\" or \"F\"");
	}

	printf("Input temperature in °%c to convert to °%c. °%c: ", convertFrom, convertTo, convertFrom);
	scanf("%f", &tempInput);

	 if (convertFrom == 'C')
		 tempOutput = (tempInput * 1.8 + 32);
	else
		tempOutput = ((tempInput - 32) / 1.8);

	printf("$%.1f°%c is $%.1f°%c.\n", tempInput, convertFrom, tempOutput, convertTo);
}
