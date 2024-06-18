#include <libmath.h>

/**
 * @side_l_len: left side length
 * @side_r_len: right side length
 * @side_b_len: bottom side length
 * @angle_a: angle
 * @angle_b: angle
 * @angle_c: angle
 */
typedef struct triangle
{
	int short_side_len;
	int middle_side_len;
	int long_side_len;
} triangle;

/**
 *
 *
 */
int triangle_area(triangle bermuda)
{
	int area;
	int angle_a, angle_b, angle_c;

	/* calculate angles from side lengths */

	if (bermuda.angle_a == 90 || bermuda.angle_b == 90 || bermuda.angle_c == 90)
		area = (bermuda.middle_side_len * bermuda.long_side_len / 2);
	else
	{
		/* calculate area based on side lengths and angles */
	}
	return area;
}

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	return (0);
}
