char *twoArrays(int k, int A_count, int *A, int B_count, int *B)
{
    for (int i = 0; i < A_count - 1; i++)
    {
        for (int j = i + 1; j < A_count; j++)
        {
            if (A[i] > A[j])
            {
                int tp = A[i];
                A[i] = A[j];
                A[j] = tp;
            }
        }
    }
    for (int i = 0; i < B_count - 1; i++)
    {
        for (int j = i + 1; j < B_count; j++)
        {
            if (B[i] < B[j])
            {
                int tp = B[i];
                B[i] = B[j];
                B[j] = tp;
            }
        }
    }
    for (int i = 0; i < A_count; i++)
    {
        if (A[i] + B[i] < k)
        {
            return "NO";
        }
    }
    return "YES";
}