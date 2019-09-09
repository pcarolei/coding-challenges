/*
 * INSTRUCTIONS:
 * Given a string of digits, you should replace any digit below 5 with '0' and
 * any digit 5 and above with '1'. Return the resulting string.
*/
#include <string.h>

void	fakeBin(const char *digits, char *buffer)
{
 	// Please place result in the memory pointed to by
 	// the buffer parameter. Buffer has enough memory to
 	// accommodate the answer as well as the null-terminating
 	// character.
	size_t	i;
	size_t	dig_len;
	char	*new_digits;

	i = 0;
	dig_len = strlen(digits);
	while (i < dig_len)
	{
		if (digits[i] < '5')
			buffer[i] = '0';
		else
			buffer[i] = '1';
		i++;
	}
	buffer[i] = '\0';
}
