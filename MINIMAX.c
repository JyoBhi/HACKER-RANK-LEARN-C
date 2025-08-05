void miniMaxSum(int arr_count, int *arr)
{
    int sum = 0;
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < arr_count; i++)
    {
        sum += arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%ld %ld\n", sum - max, sum - min);
}
