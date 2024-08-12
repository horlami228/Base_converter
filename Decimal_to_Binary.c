#include "base.h"
/**
 * dec_to_bin - This function converts decimal to binary
 * @n: user input
 * Return: returns 0 on success, 1 if otherwise
 */

int dec_to_bin(unsigned int n)
{
    // declare a character array to hold the binary digits
    char binary[250];
    int i; // will be used for indexing
    i = 0;
    while (n >= 1) // The loop breaks once n is less than 1
    {
        if ((n % 2) == 0)
        {
            binary[i] = '0'; // if remainder is 0 add (0) to binary at postion i
        }
        else
        {
            binary[i] = '1'; // else add 1
        }

        i++;    // i is incremented
        n /= 2; // n is reduced by diving with 2
    }

    binary[i] = '\0';

    /**
     * The binary numbers need to be swapped to start from MSB(bottom) to the LSB(top)
     */
    char temp;
    int len;
    int j;
    len = strlen(binary); // lenght of binary
    j = 0;

    while (j < len / 2) // loops through half of binary
    {
        temp = binary[j];
        binary[j] = binary[len - j - 1];
        binary[len - j - 1] = temp;
        j++;
    }

    printf("🔢 Your Binary Conversion Result is: %-5s\n", binary);

    return (0);
}