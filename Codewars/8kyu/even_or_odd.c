const char	*even_or_odd(int number)
{
	int	n;

	n = (number > 0) ? number : (-number);
	if (n % 2 == 0)
		return ("Even");
	return ("Odd");
}
