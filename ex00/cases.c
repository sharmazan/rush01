#include <stdio.h>

void	fill_column_top_down(int square[4][4], int col);
void	fill_column_down_top(int square[4][4], int col);
void	fill_row_left_right(int square[4][4], int row);
void	fill_row_right_left(int square[4][4], int row);
int		is_4_set_in_column(int square[4][4], int col);
int		is_4_set_in_row(int square[4][4], int row);
int		max_in_column(int square[4][4], int col);
int		max_in_row(int square[4][4], int row);

void	check_4(int view_points[4][4], int square[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (view_points[i][j] == 4)
			{
				if (i == 0)
					fill_column_top_down(square, j);
				else if (i == 1)
					fill_column_down_top(square, j);
				else if (i == 2)
					fill_row_left_right(square, j);
				else
					fill_row_right_left(square, j);
			}
			j++;
		}
		i++;
	}
	(void)square;
}

void	check_1(int view_points[4][4], int square[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (view_points[i][j] == 1)
			{
				if (i == 0)
					square[0][j] = 4;
				else if (i == 1)
					square[3][j] = 4;
				else if (i == 2)
					square[j][0] = 4;
				else
					square[j][3] = 4;
			}
			j++;
		}
		i++;
	}
	(void)square;
}

void	check_2_confirm(int square[4][4], int i, int j)
{
	int	col;

	if (i == 0 || i == 1)
	{
		if (is_4_set_in_column(square, j))
			square[i * 3][j] = max_in_column(square, j) - 1;
	}
	else if (i == 2 || i == 3)
	{
		if (is_4_set_in_row(square, j))
		{
			if (i == 2)
				col = 0;
			else
				col = 3;
			square[j][col] = max_in_row(square, j) - 1;
		}
	}
}

void	check_2(int view_points[4][4], int square[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (view_points[i][j] == 2)
				check_2_confirm(square, i, j);
			j++;
		}
		i++;
	}
}
