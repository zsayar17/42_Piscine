void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	y;

	i = 0;
	while (i < size)
	{
		y = i + 1;
		while (y < size)
		{
			if (tab[y] < tab[i])
			{
				temp = tab[i];
				tab[i] = tab[y];
				tab[y] = temp;
			}
			y++;
		}
		i++;
	}
}
