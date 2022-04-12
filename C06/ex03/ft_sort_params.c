#include <unistd.h>

int	ft_strncmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *s1)
{
	while (*s1)
	{
		write(1, s1, 1);
		s1++;
	}	
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		y;
	char	*holder;

	i = 1;
	if (argc > 0)
	{
		while (argv[i])
		{
			y = i + 1;
			while (argv[y])
			{
				if (ft_strncmp(argv[i], argv[y]) > 0)
				{
					holder = argv[i];
					argv[i] = argv[y];
					argv[y] = holder;
				}				
				y++;
			}		
			ft_putstr(argv[i++]);
		}	
	}
}
