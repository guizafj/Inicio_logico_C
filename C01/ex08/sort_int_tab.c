
//#include <stdio.h>

void	sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	temp = 0;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = -1;
		}
		i++;
	}
}
/*
int	main(void)
{
	int array[] = {7,4,2,0,10};
	sort_int_tab(array, 5);
	return (0);
	i = 0;
	while ( i < size)
	{
		printf("%i ", tab[i]);
		i++;
	}
}*/
