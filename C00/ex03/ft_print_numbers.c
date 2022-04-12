#include <unistd.h>

void	ft_print_numbers(void)
{	
	char	i;
	char	j;

	i = '0';
	j = '9';
	while (i <= j)
	{
		write(1, &i, 1);
		i++;
	}
}
