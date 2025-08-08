int diagonalDifference(int arr_rows, int arr_columns, int **arr)
{
    int a = 0;
    int b = 0;
    for (int i = 0; i < arr_rows; i++)
    {
        a += arr[i][i];
        b += arr[i][arr_columns - i - 1];
    }
    int d = a - b;
    if (d < 0)
    {
        d = -d;
    }
    return d;
}
