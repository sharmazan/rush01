int is_4_set_in_column(int square[4][4], int col)
{
    int row;

    row = 0;
    while (row < 4)
    {
        if (square[row][col] == 4)
            return (1);
        row++;
    }
    return (0);
}

int is_4_set_in_row(int square[4][4], int row)
{
    int col;

    col = 0;
    while (col < 4)
    {
        if (square[row][col] == 4)
            return (1);
        col++;
    }
    return (0);
}

int max_in_column(int square[4][4], int col)
{
    int row;
    int max;

    row = 0;
    max = 0;
    while (row < 4)
    {
        if (square[row][col] > max)
            max = square[row][col];
        row++;
    }
    return (max);
}

int max_in_row(int square[4][4], int row)
{
    int col;
    int max;

    col = 0;
    max = 0;
    while (col < 4)
    {
        if (square[row][col] > max)
            max = square[row][col];
        col++;
    }
    return (max);
}
