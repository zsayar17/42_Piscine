#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	y;

	if (argc > 0)
	{
		i = 1;
		while (argv[i])
		{
			y = 0;
			while (argv[i][y] != '\0')
			{
				write(1, &argv[i][y], 1);
				y++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}
