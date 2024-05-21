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
	printf("Which temperature would you like to convert TO? (C/F): ");
	scanf("%c", &convertTo);
	if (convertTo == 'c' || convertTo == 'C')
		convertFrom = 'F';
	else if (convertTo == 'f' || convertTo == 'F')
                convertFrom = 'C';
	else
		printf("Please type \"C\" or \"F\"");
	}

	printf("Input temperature in °%c to convert to °%c. °%c: ", convertFrom, convertTo, convertFrom);
	scanf("%f", &tempInput);

	 if (convertFrom == 'C')
		 tempOutput = (tempInput * 1.8 + 32);
	else
		tempOutput = (tempInput / 1.8 - 32);

	printf("$%.1f°%c is $%.1f°%c.", tempInput, convertFrom, tempOutput, convertTo);
}
