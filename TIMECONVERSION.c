char *timeConversion(char *s)
{
    static char result[9];
    int hr = (s[0] - '0') * 10 + (s[1] - '0');

    if (s[8] == 'A')
    {
        if (hr == 12)
            hr = 0;
    }
    else if (s[8] == 'P')
    {
        if (hr != 12)
            hr += 12;
    }

    snprintf(result, sizeof(result), "%02d:%c%c:%c%c", hr, s[3], s[4], s[6], s[7]);
    return result;
}