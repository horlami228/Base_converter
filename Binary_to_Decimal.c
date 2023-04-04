#include "base.h"
/**
 * bin_to_dec - convert binary to decimal
 * @binary: binary string to use
 * Return: returns (0) on success. (-1) otherwise
*/
int bin_to_dec(const char *binary)
{
    int decimal, len, base;
    decimal = 0;
    len = strlen(binary) - 1;
    base = 1;

    while (len >= 0) // looping through from the back of the string
    {
        // Handle error
        if (binary[len] < '0' || binary[len] > '1')
        {
            dprintf(2, "Only valid base2 of 0 & 1\n"); // print error to stderr
            return (-1);
        }

        if ((binary[len]) == '1') 
        {
            decimal += base;
        }

        base *= 2;
        len--;
    }

    printf("Loading-------------------------------------------\n");
    printf("%d\n", decimal);
    return (0);
}
