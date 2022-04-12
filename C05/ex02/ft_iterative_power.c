int	ft_iterative_power(int nb, int power)
{
	int	isnegative;
	int	number;

	number = 1;
	isnegative = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (power == 0)
		number = 1;
	while (0 < power)
	{
		number *= nb;
		power--;
	}
	return (number * isnegative);
}
