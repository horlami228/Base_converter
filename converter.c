#include "base.h"
/**
 * code_base - converter function
 * Return: (0) on success or (1) for otherwise 
*/
int code_base(void)
{   int convert_from, convert_to;
    char binary[250], hexadecimal[250];
    int decimal;
    char end_loop[5] = "yes";

    printf("################# BASE CONVERTER ##########\n");
    printf("============================================\n\n\n\n");

    printf("Welcome to the Base Converter\n");
    while (true)
    {
        printf("\nChoose what you are converting from:\n");
        printf("Enter (1) for Binary\n");
        printf("Enter (2) for Decimal\n");
        printf("Enter (3) for Hexadecimal\n\n");

        scanf("%d", &convert_from); // get input from user

        printf("\nChoose what you are converting to:\n");
        printf("Enter (1) for Binary\n");
        printf("Enter (2) for Decimal\n");
        printf("Enter (3) for Hexadecimal\n\n");

        scanf("%d", &convert_to); // get input from user
        
        // perform operation to user input
        if (convert_from == 1) 
        {
            printf("Input the Binary number: ");
            scanf("%s", binary);
        }
        else if(convert_from == 2)
        {
            printf("Input the Decimal number: ");
            scanf("%d", &decimal);
        }
        else if(convert_from == 3)
        {
            printf("Input the Hexadecimal number: ");
            scanf("%s", hexadecimal);
        }
        
        // perform operation to user input
        if (convert_from == 1 && convert_to == 2)
        {
            bin_to_dec(binary);
        }
        else if (convert_from == 2 && convert_to == 1)
        {
            dec_to_bin(decimal);
        }
        else if (convert_from == 1 && convert_to == 3)
        {
            bin_to_hex(binary);
        }
        else if (convert_from == 2 && convert_to == 3)
        {
            dec_to_hex(decimal);
        }
        else if (convert_from == 3 && convert_to == 1)
        {
            hex_to_bin(hexadecimal);
        }
        else if (convert_from == 3 && convert_to == 2)
        {
            hex_to_dec(hexadecimal);
        }
        else if (convert_from == convert_to)
        {
            dprintf(2, "\nError: You can not perform the same operation\n");
            dprintf(2, "Try again\n");
        }
        else
        {
            dprintf(2,"Error occured\n");
            dprintf(2, "Provide accurate instructions\n");
            return (-1);
        }
        printf("\nType 'yes' to try again. Type 'no' to end program\n");
        scanf("%s", end_loop);
        if (strcmp(end_loop, "no") == 0 || strcmp(end_loop, "No") == 0 || strcmp(end_loop, "NO") == 0)
        {
            printf("\nGoodbye.\n");
            break;
        }
        system("clear");
    }
    return (0);
}   
