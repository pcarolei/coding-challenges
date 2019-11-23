/*
 *	kata: Highest Scoring Word
 *	link: https://www.codewars.com/kata/highest-scoring-word/
*/

#include <stdlib.h>
#include <string.h>

int		scoreWord(const char *str)
{
	int	i;
	int	score;

	i = 0;
	score = 0;
	while (str[i] && str[i] != ' ')
	{
		score += (str[i] - 'a' + 1);
		i++;
	}
	return (score);
}

char	*getNextWord(char *str, char *cur_ptr)
{
	int	i;

	i = 0;
	if (!cur_ptr)
		return (str);
	while (cur_ptr[i] != ' ')
	{
		if (cur_ptr[i] == '\0')
			return (NULL);
		i++;
	}
	while (cur_ptr[i] == ' ')
		i++;
	return (&cur_ptr[i]);
}

char	*extractWord(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
		i++;
	return (strndup(str, i));
}

char	*highestScoringWord(const char *str)
{
	char	*cur_word;
	char	*max_ptr;
	int		cur_res;
	int		max_res;

	cur_word = NULL;
	max_ptr = NULL;
	cur_res = -1;
	max_res = -1;
	while ((cur_word = getNextWord((char *)str, cur_word)))
	{
		if ((cur_res = scoreWord(cur_word)) > max_res)
		{
			max_res = cur_res;
			max_ptr = cur_word;
		}
	}
	return (extractWord(max_ptr));
}
