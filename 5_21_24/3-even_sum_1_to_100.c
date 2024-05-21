#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 2))
			sum += i;
	}
	printf("%d\n", sum);
}
