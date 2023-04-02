#include "base.h"
/**
 * hex_to_dec - converts hexadecimal to decimal numbers
 * @hexa: hexadecimal input
 * Return: returns (0) on succes. (1) otherwise
*/
int hex_to_dec(const char *hexa)
{
    int decimal, power, len;
    decimal = 0;
    power = 0;
    char value;
    len = strlen(hexa) - 1; // length of string to use

    while(len >= 0) // loop breaks when len is less than 0
    {
        if (isdigit(hexa[len])) // if its a digit
        {
                value = hexa[len];
                decimal += (value - '0') * pow(16, power); // substract the ascii value of 0(48)
        }
        if (isalpha(hexa[len]))
        {
            value = tolower(hexa[len]);
            if (value >= 97 && value <= 102)
            {
                decimal += (value - 'a' + 10) * pow(16, power);
            }
            else
            {
                //Handle error
                dprintf(2, "Only valid Hexadecimal numbers\n"); 
                return (-1);
            }
        }
        len--;
        power++;
    }

    printf("Loading-------------------------------------------\n");
    printf("%d\n", decimal);

    return (0);
}