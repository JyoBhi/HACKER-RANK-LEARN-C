int lonelyinteger(int count, int *arr)
{
    int unique_val = 0;

    // XOR all elements, duplicates will cancel out
    for (int idx = 0; idx < count; idx++)
    {
        unique_val ^= arr[idx];
    }

    return unique_val;
}
