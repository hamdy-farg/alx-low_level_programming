#include "function_pointers.h"

/**
* array_iterator - gsadg
* @array: sdsgdsag
* @size: sgdadg
* @action: dsg
* Return: asdg
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array  <= end)
		while (array <= end)
			action(*array++);
}
