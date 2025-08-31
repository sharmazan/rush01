#include <unistd.h>

int char_to_int(char c)
{
	int	i;

	i = c - '0';
	if (i >= 1 && i <= 4)
		return (c - '0');
	else
		return (0);
}

char	int_to_char(int i)
{
	return ('0' + i);
}

void	print_array(int *array, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = int_to_char(array[i]);
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	zero_square(int square[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			square[row][col] = 0;
			col++;
		}
		row++;
	}
}
