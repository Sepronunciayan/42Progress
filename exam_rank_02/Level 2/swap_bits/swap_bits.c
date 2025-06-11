unsigned char   swap_bits(unsigned char octet)
{
    return ((octet & 0xF0) >> 4 | (octet & 0x0F) << 4);
}
