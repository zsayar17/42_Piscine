int	takespace(char *str)
{
	int	counter;

	counter = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\r' || *str == '\f' || *str == ' ')
	{
		counter++;
		str++;
	}
	return (counter);
}

int	takenegative(char *str, int y)
{
	int	x;
	int	counter;
	int	counterall;

	counter = 0;
	counterall = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			counter++;
		str++;
		counterall++;
	}
	if (counter % 2 == 1)
		 x = -1;
	else
		 x = 1;
	if (y == 1)
		return (counterall);
	else if (y == 0)
		return (x);
	return (0);
}

int	ft_atoi(char *str)
{
	int	spacecount;
	int	isnegative;
	int	lastcount;
	int	result;

	result = 0;
	spacecount = takespace(str);
	isnegative = takenegative(&str[spacecount], 0);
	lastcount = takenegative(&str[spacecount], 1) + spacecount;
	while (str[lastcount] <= '9' && str[lastcount] >= '0')
	{
		result = (str[lastcount] - '0') + (result * 10);
		lastcount++;
	}
	result = isnegative * result;
	return (result);
}
