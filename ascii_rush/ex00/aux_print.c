/* ascii_rush: helper to write a single character */

#include "rush.h"

void	print_character(char c)
{
	write(1, &c, 1);
}

void	print_message(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}	
}
