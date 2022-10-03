#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{

0-linear.c size_t i, left, right;

0-linear.c if (array == NULL)
0-linear.c 0-linear.c return (-1);

0-linear.c for (left = 0, right = size - 1; right >= left;)
0-linear.c {
0-linear.c 0-linear.c printf("Searching in array: ");
0-linear.c 0-linear.c for (i = left; i < right; i++)
0-linear.c 0-linear.c 0-linear.c printf("%d, ", array[i]);
0-linear.c 0-linear.c printf("%d\n", array[i]);

0-linear.c 0-linear.c i = left + (right - left) / 2;
0-linear.c 0-linear.c if (array[i] == value)
0-linear.c 0-linear.c 0-linear.c return (i);
0-linear.c 0-linear.c if (array[i] > value)
0-linear.c 0-linear.c 0-linear.c right = i - 1;
0-linear.c 0-linear.c else
0-linear.c 0-linear.c 0-linear.c left = i + 1;
0-linear.c }

0-linear.c return (-1);
}
