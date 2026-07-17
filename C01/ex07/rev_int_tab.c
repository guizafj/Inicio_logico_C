
void	rev_int_tab(int *tab, int size)
{
	int	inicio;
	int	final;
	int	temp;

	inicio = 0;
	final = size -1;
	while (inicio < final)
	{
		temp = tab[inicio];
		tab[inicio] = tab[final];
		tab[final] = temp;
		inicio++;
		final--;
	}
}
#include <stdio.h>
int	main(void)
{
	int num[] = {1,5,0, 4,5};
	int i = 0;
	
	rev_int_tab(num, 5);
	while (i < 5)
	{
		printf("%i", num[i]);
	i++;
	}
}
