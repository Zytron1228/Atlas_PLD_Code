#include <stdio.h>
/**
 * Betty = null
 */
int main(void)
{
	float tempC;
	float tempF;

	printf("Input temperature in °C to convert to °F. °C: ");
	scanf("$%.1f\n", &tempC);

	tempF = (tempC * 1.8 + 32);

	printf("$%.1f°C is $%.1f°F.", tempC, tempF);
}
