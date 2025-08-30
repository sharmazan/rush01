void	fill_column_top_down(int square[4][4], int col)
{
	square[0][col] = 1;
	square[1][col] = 2;
	square[2][col] = 3;
	square[3][col] = 4;
}

void	fill_column_down_top(int square[4][4], int col)
{
	square[3][col] = 1;
	square[2][col] = 2;
	square[1][col] = 3;
	square[0][col] = 4;
}

void	fill_row_left_right(int square[4][4], int row)
{
	square[row][0] = 1;
	square[row][1] = 2;
	square[row][2] = 3;
	square[row][3] = 4;
}

void	fill_row_right_left(int square[4][4], int row)
{
	square[row][3] = 1;
	square[row][2] = 2;
	square[row][1] = 3;
	square[row][0] = 4;
}
