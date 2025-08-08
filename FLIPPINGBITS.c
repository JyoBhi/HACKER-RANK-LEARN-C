long flippingBits(long n)
{

    unsigned long mask = 0xFFFFFFFF;

    unsigned long flipped = ((unsigned long)n) ^ mask;

    return (long)flipped;
}
