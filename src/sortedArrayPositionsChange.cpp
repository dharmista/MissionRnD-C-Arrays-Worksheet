/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

bool validate3(int * Arr, int len)
{
	if (Arr == NULL)
		return false;
	if (len <= 0)
		return false;
}

void * sortedArrayPositionsChange(int *Arr, int len)
{
	if (!validate3(Arr, len))
		return NULL;
	int i = 0;
	int p1 = -1, p2 = -1;
	while (Arr[i] < Arr[i + 1] && i<len - 1)
	{
		i++;
	}
	p1 = i;
	if (p1 == len - 1)
		return NULL;
	i = p1 + 1;
	while (Arr[i]<Arr[i+1])
	{
		i++;
	}
	p2 = i + 1;
	swap(&Arr[p1], &Arr[p2]);
	return NULL;
}