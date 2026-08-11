#include "rush.h"

void	write_row0(int x, int y, int row)
{
	int	col;

	col = 0;
	while (col < x)
	{
		if (row == 0 && col == 0)
			print_character('o');
		else if (row == 0 && col == x -1)
			print_character('o');
		else if (row == y - 1 && col == 0)
			print_character('o');
		else if (row == y -1 && col == x -1)
			print_character('o');
		else if (row == 0 || row == y - 1)
			print_character('-');
		else if (col == 0 || col == x - 1)
			print_character('|');
		else
			print_character(' ');
		col++;
	}
}

void	rush00(int x, int y)
{
	int	row;
	char	*message;

	message = "Valores invalidos\n";
	if (x <= 0 || y <= 0)
	{
		print_message(message);
		return ;
	}
	row = 0;
	while (row < y)
	{
		write_row0(x, y, row);
		print_character('\n');
		row++;
	}
}
