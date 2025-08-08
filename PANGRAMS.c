char *pangrams(char *s)
{
    int ls[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isalpha(s[i]))
        {
            char lr = tolower(s[i]);
            ls[lr - 'a'] = 1;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (ls[i] == 0)
        {
            return "not pangram";
        }
    }
    return "pangram";
}
