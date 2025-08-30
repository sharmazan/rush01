#include <unistd.h>
#include <stdio.h>
/*
4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2
*/

int	char_to_int(char c)
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

int	parse_args(char *arg_str, int view_points[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < (16 * 2 - 1))
	{
		if (char_to_int(arg_str[i]))
		{
			j = i / 2;
			view_points[j / 4][j % 4] = char_to_int(arg_str[i]);
			i += 2;
		}
		else
			break ;
	}
	if (i < 32)
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	int	view_points[4][4];
	int	square[4][4];

	if (ac != 2 || !parse_args(av[1], view_points))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	print_array(view_points[0], 4);
	print_array(view_points[1], 4);
	print_array(view_points[2], 4);
	print_array(view_points[3], 4);
	square[0][0] = 1;
	square[0][1] = 2;
	square[0][2] = 3;
	square[0][3] = 4;
	print_array(square[0], 4);
	return (0);
}
