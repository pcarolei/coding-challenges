#include <string.h>

char	*repeat_str(size_t count, const char *src)
{
	char	*new_str;
	char	*res;

	if (!src)
		return (NULL);
	if (count == 0)
		return ("");
	new_str = (char *)malloc(strlen(src) * count + 1);
	if (!new_str)
		return (NULL);
	res = new_str;
	while (count > 0)
	{
		new_str = stpcpy(new_str, src);
		count--;
	}
	return (res);
}
