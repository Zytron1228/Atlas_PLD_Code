#include <stdio.h>

void pyramid_outline(int pyramidHeight)
{
	int x, y;

	for (x = 0; x < pyramidHeight; x++)
	{
		for (y = 0; y < pyramidHeight * 2; y++)
		{
			int shouldPrint = y >= (pyramidHeight - x) && y <= (pyramidHeight + x);
			if (shouldPrint)
			{
				if (x == 0) /*top corner*/
					putchar('^');
				else
				{
					if (y == (pyramidHeight - x)) /*left side*/
						putchar('/');
					else
					if (y == (pyramidHeight + x)) /*right side*/
						putchar('\\');
					else
					if (x == pyramidHeight - 1) /*bottom side*/
						putchar('_');
					else						/*inside*/
						putchar(' ');
				}
			}
			else 									/*outside*/
				putchar(' ');
		}
		putchar('\n');
	}
}

void recursive_pyramid(int height, int x, int y)
{
	int shouldPrint = y >= (height - x) && y <= (height + x);

	if (shouldPrint)
		putchar(178);
	else
		putchar(' ');

	if (y == height * 2) {
		putchar('\n');
		if (x != height - 1)
			recursive_pyramid(height, x + 1, 0);
	}
	else
		recursive_pyramid(height, x, y + 1);
}

void pyramid(int pyramidHeight)
{
	int x, y;

	for (x = 0; x < pyramidHeight; x++)
	{
		for (y = 0; y < pyramidHeight * 2; y++)
		{
			int shouldPrint = y >= (pyramidHeight - x) && y <= (pyramidHeight + x);
			if (shouldPrint)
				putchar(178); /* ▓ */
			else
				putchar(' ');
		}
		putchar('\n');
	}
}
char even_or_odd(int whoAmI)
{
	if (whoAmI % 2)
		return ('o');
	return ('e');
}

void leap_year(int year)
{
	if (!(year % 4))
		printf("%d is a leap year.\n", year);
	else
		printf("%d is not a leap year.\n", year);
}
int main(void)
{
	/*leap_year(2008);
	leap_year(4001);
	leap_year(104);
	leap_year(3016);
	leap_year(14);
	leap_year(2024);
	leap_year(2013);
	leap_year(2048);
	leap_year(0);*/

	printf("iterative 3 5 and 15:\n");
	pyramid(3);
	putchar('\n');
	pyramid(5);
	putchar('\n');
	pyramid(15);

	printf("\nrecursive 3 5 and 15:\n");
	recursive_pyramid(3, 0, 0);
	putchar('\n');
	recursive_pyramid(5, 0, 0);
	putchar('\n');
	recursive_pyramid(15, 0, 0);

	printf("\niterative outline 3 5 and 15:\n");
	pyramid_outline(3);
	putchar('\n');
	pyramid_outline(5);
	putchar('\n');
	pyramid_outline(15);

	return 0;
}
