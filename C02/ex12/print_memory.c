
#include <unistd.h>

void	putaddr_hex(unsigned long long num, int count)
{
	char	c;
	int		residuo;

	if ((count > 0))
	{
		putaddr_hex((num / 16), count -1);
	}
	residuo = num % 16;
	if (residuo < 10)
	{
		c = residuo + '0';
	}
	else
	{
		c = residuo - 10 + 'a';
	}
	write(1, &c, 1);
}

void	print_hex_digit(unsigned char num)
{
	char	c;

	if (num < 10)
	{
		c = num + '0';
	}
	else
	{
		c = num - 10 + 'a';
	}
	write(1, &c, 1);
}

void	print_hex_cols(unsigned char *ptr, unsigned int bytes_to_print)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < bytes_to_print)
		{
			print_hex_digit(ptr[i] / 16);
			print_hex_digit(ptr[i] % 16);
		}
		else
		{
			write(1, "  ", 2);
		}
		if (i % 2 == 1)
		{
			write(1, " ", 1);
		}
		i++;
	}
}

void	print_text_cols(unsigned char *ptr, unsigned int bytes_to_print)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < bytes_to_print)
		{
			if (ptr[i] >= ' ' && ptr[i] <= '~')
			{
				write(1, &ptr[i], 1);
			}
			else
			{
				write(1, ".", 1);
			}
		}
		i++;
	}
}

void	*print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	left;
	unsigned int	chunk;

	ptr = (unsigned char *)addr;
	left = size;
	while (left > 0)
	{
		if (left >= 16)
		{
			chunk = 16;
		}
		else
		{
			chunk = left;
		}
		putaddr_hex((unsigned long long)ptr, 16);
		write(1, ": ", 2);
		print_hex_cols(ptr, chunk);
		print_text_cols(ptr, chunk);
		write(1, "\n", 1);
		ptr = ptr + 16;
		left = left - 16;
	}
}
