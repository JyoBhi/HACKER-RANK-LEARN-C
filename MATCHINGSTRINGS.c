
int *matchingStrings(int total_strings, char **strings, int total_queries, char **queries, int *out_count)
{
    // Allocate memory for storing counts of each query
    int *freq_list = malloc(total_queries * sizeof(int));

    for (int q = 0; q < total_queries; q++)
    {
        int match_counter = 0;

        // Check this query against all input strings
        for (int s = 0; s < total_strings; s++)
        {
            if (strcmp(queries[q], strings[s]) == 0)
            {
                match_counter++;
            }
        }

        // Store the result for this query
        freq_list[q] = match_counter;
    }

    *out_count = total_queries;
    return freq_list;
}
