int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		result = 0;
	else if (nb > 1)
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
	}
	return (result);
}
