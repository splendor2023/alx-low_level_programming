#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum4, sum5, r;

	sum4  = 0;
	sum5 = 0;

	for (r = 0; r < size; r++)
	{
		sum4 = sum4 + a[r * size + r];
	}

	for (r = size - 1; r >= 0; r--)
	{
		sum5 += a[r * size + (size - r - 1)];
	}

	printf("%d, %d\n", sum4, sum5);
}
