#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	index;
	int	*buffer;

	if (min >= max)
	{
		return (0);
	}
	bound = max - min;
	buffer = (int *)malloc(bound * sizeof(int) + 1);
	if (buffer == NULL)
	{
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index <= bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound);
}
