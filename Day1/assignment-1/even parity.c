#include <stdio.h>
unsigned char make_even_parity(unsigned char x)
{
    int count = 0;

    for (int i = 0; i < 8; i++)
        if (x & (1 << i))
            count++;

    if (count % 2 != 0)   // odd parity
        x |= 0x80;        // set MSB

    return x;
}

int main()
{
    unsigned char data = 0x25;
    printf("Result = 0x%X", make_even_parity(data));
    return 0;
}
