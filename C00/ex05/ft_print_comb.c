#include <unistd.h>

void	ft_putchar(char i, char j, char k)
{	
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0 ;
	j = 1 ;
	k = 2 ;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8 )
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putchar(i + 48, j + 48, k + 48);
				k++;
			}
			j++;
		}
		i++;
	}
}
