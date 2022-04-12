#include <unistd.h>

int		g_sfr;
char	g_pos;
char	g_neg;

void	ft_is_negative(int n)
{	
	g_sfr = 0;
	g_pos = 'P';
	g_neg = 'N';
	if (n >= g_sfr)
	{
		write(1, &g_pos, 1);
	}
	else
	{
		write (1, &g_neg, 1);
	}
}
