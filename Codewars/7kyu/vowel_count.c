/*
 *	kata: Vowel Count
 *	link: https://www.codewars.com/kata/54ff3102c1bad923760001f3
*/
#include <stddef.h>

int		check_char(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return (1);
	return (0);
}

size_t	get_count(const char *s)
{
	size_t	i;
	size_t	cnt;

	i = -1;
	cnt = 0;
	while (s[++i])
		cnt += check_char(s[i]);
	return (cnt);
}
