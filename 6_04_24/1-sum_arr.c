#include "main.h"
#include <stdio.h>
int main(void)
{
    int arr[4] = {1, 2, 3, 5};

    printf("sum: %d\n", sum(arr, 4));
    return 0;
}

int sum(int *array, int size)
{
    if (size == 1)
        return (array[0]);
    array[size - 2] += array[size - 1];
    printf ("%d\n", array[size - 1]);
    return sum(array, size - 1);

}