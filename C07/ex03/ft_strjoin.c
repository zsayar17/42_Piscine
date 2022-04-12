#include <stdlib.h>

int	lenghtofarray(char **strs, char *sep)
{
	int	i;
	int	y;

	i = 0;
	while (strs[i])
	{
		i++;
	}
	i = i - 1;
	y = 0;
	while (sep[y])
	{
		y++;
	}
	y = y - 1;
	return (i + y);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = (char *)malloc(sizeof(char) * lenghtofarray(strs, sep) + 1);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}
