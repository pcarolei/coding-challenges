/*
 * INSTRUCTIONS:
 * I'm new to coding and now I want to get the sum of two arrays...
 * actually the sum of all their elements. I'll appreciate for your help.
 * P.S. Each array includes only integer numbers. Output is a number too.
*/
#include <stddef.h>

long	arr_sum(const int *arr, size_t n)
{
	size_t	i;
	long	sum;

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += arr[i];
		i++;
	}
	return (sum);
}

long	arr_plus_arr(const int *a,  const int *b, size_t na, size_t nb)
{
	return (arr_sum(a, na) + arr_sum(b, nb));
}
