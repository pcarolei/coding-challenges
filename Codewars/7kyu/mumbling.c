/*
 *	kata: Mumbling
 *	link: https://www.codewars.com/kata/mumbling
*/

#include <stdlib.h>

char	*create_string(const char *source)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	size = 0;
	while (source[i])
	{
		size += i + 1;
		i++;
	}
	size += i - 1;
	str = (char *)malloc(size);
	return (str);
}

char	get_capital(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	return (c - 32);
}

char	get_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c);
	return (c + 32);
}

void	fill_string(char *str, char c, int *pos, int count)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (i < count)
	{
		if (i == 0)
			str[*pos + i] = get_capital(c);
		else
			str[*pos + i] = get_lowercase(c);
		i++;
	}
	str[*pos + i] = '-';
	*pos = *pos + i + 1;
}

char	*accum(const char *source)
{
	char	*res;
	int		i;
	int		j;

	if (!(res = create_string(source)))
		return (NULL);
	i = 0;
	j = 0;
	while (source[i])
	{
		fill_string(res, source[i], &j, i + 1);
		i++;
	}
	res[j - 1] = '\0';
	return (res);
}
