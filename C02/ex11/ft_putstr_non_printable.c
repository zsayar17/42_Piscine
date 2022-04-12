#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dec_to_hex(unsigned char n)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[n / 16]);
	ft_putchar(base[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_dec_to_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
