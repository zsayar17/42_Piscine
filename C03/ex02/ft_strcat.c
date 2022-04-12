int	ft_strlen(char *dest)
{
	int	count;

	count = 0;
	while (*dest != '\0')
	{
		count++;
		dest++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	size;
	int	i;

	size = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
