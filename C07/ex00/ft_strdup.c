#include <stdlib.h>

int	ft_strlen(char *s1)
{
	int	count;

	count = 0;
	while (*s1)
	{
		count++;
		s1++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dest)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
