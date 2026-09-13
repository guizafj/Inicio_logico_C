
int	ft_sqrt(int nb)
{
	int	ft_sqrt;

	if (nb < 0)
		return (0);
	ft_sqrt = 1;
	while (ft_sqrt * ft_sqrt < nb)
		++ft_sqrt;
	if (ft_sqrt * ft_sqrt == nb)
		return (ft_sqrt);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_sqrt(25));
	return (0);
}*/
