#include <stdbool.h>
#include "sort.h"
/**
*bubble_sort - a function that sorts an array of integers
*in ascending order using the Bubble sort algorithm
*
*@array: a pointer to an array
*@size: size of an array
*/
void bubble_sort(int *array, size_t size)
{
bool flag;
size_t i, j, temp;

for (i = 0; i < size - 1; i++)
{
	flag = false;
	for (j = 0; j < size - 1 - i; j++)
	{
		if (array[j] > array[j + 1] && size >= 2)
		{
		temp = array[j];
		array[j] = array[j + 1];
		array[j + 1] = temp;
		print_array(array, size);
		flag = true;
		}
		}
	if (flag == false)
	break;
}
}
