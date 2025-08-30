#include <stdio.h>

void	fill_column_top_down(int square[4][4], int col);
void	fill_column_down_top(int square[4][4], int col);
void	fill_row_left_right(int square[4][4], int row);
void	fill_row_right_left(int square[4][4], int row);

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
