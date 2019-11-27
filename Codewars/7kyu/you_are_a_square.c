/*
 *	kata: You're a square!
 *	link: https://www.codewars.com/kata/54c27a33fb7da0db0100040e
*/

#include <stdbool.h>

bool	is_square(int n)
{
	int	s;

	s = 0;
	if (n < 0)
		return (false);
	if (n == 0)
		return (true);
	while (s * s <= n)
	{
		if (s * s == n)
			return (true);
		s++;
	}
	return (false);
}
