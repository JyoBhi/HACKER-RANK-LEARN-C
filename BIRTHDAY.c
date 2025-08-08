
int birthday(int s_count, int *s, int d, int m)
{
    int a = 0;

    for (int i = 0; i <= s_count - m; i++)
    {
        int b = 0;

        for (int j = 0; j < m; j++)
        {
            b += s[i + j];
        }
        if (b == d)
        {
            a++;
        }
    }

    return a;
}
