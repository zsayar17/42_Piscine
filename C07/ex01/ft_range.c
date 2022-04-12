#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (max <= min)
		return (0);
	p = (int *)malloc(sizeof(int) * (max - min + 1));
	if (!p)
		return (0);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
