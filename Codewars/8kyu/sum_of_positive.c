#include <stddef.h>

int	positive_sum(const int *values, size_t count)
{
	unsigned int	sum;

	sum = 0;
	while (count > 0)
	{
		if (0 < values[count - 1])
			sum += values[count - 1];
		count--;
	}
	return (sum);
}
