#include "base.h"
/**
 * dec_to_hex - This functions converts decimal to hexadecimal number
 * @n: user input taken
 * Return: returns (0) on success. returns 1 if otherwise
 */

int dec_to_hex(unsigned int n)
{
    // declaring a character array to hold the hexadecimals
    char buffer[250];
    int index;
    index = 0;         // used for indexing
    int remainder = 0; // remainder variable
    while (n >= 1)     // breaks loop when n is less than 1
    {
        remainder = n % 16;
        if (remainder < 10)
        {
            buffer[index] = '0' + remainder;
        }
        else
        {
            buffer[index] = 'A' + remainder - 10;
        }
        index++;
        n /= 16;
    }

    buffer[index] = '\0';
    /**
     * Swap characters in the buffer to read from the MSB(bottom) to LSB(top)
     */

    char temp;
    int len;
    int j;
    len = strlen(buffer); // get length of binary
    j = 0;

    while (j < len / 2) // loops through half of binary
    {
        temp = buffer[j];
        buffer[j] = buffer[len - j - 1];
        buffer[len - j - 1] = temp;
        j++;
    }

    printf("🔢 Your Hexadecimal Conversion Result is: %-5s\n", buffer);

    return (0);
}