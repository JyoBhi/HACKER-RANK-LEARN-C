int *countingSort(int arr_count, int *arr, int *result_count)
{
    int r = 100;
    int *f = calloc(r, sizeof(int));
    for (int i = 0; i < arr_count; i++)
    {
        f[arr[i]]++;
    }
    *result_count = r;
    return f;
}
