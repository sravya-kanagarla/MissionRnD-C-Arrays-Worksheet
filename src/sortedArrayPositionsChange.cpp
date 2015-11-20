/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	if (len <= 1 || Arr == NULL)
		return NULL;
	int i = 0;
	len -= 1;
	int t;
	while (i < len && Arr[i] < Arr[i + 1]) {
		i++;
	}
	while (len > i && Arr[len] > Arr[len - 1]) {
		len--;
	}
	t = Arr[len];
	Arr[len] = Arr[i];
	Arr[i] = t;
}