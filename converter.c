#include "base.h"
/**
 * code_base - converter function
 * Return: (0) on success or (1) for otherwise
 */

/**
 * clear_screen - Clear the terminal screen
 */
void clear_screen(void)
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

/**
 * loading_indicator - Display a simple loading indicator
 */

void loading_indicator(void)
{
    printf("🔄 Processing");
    for (int i = 0; i < 3; i++)
    {
        printf(".");
        fflush(stdout);
        sleep(1);
    }
    printf("\n");
}

/**
 * display_help - Show help menu
 */
void display_help(void)
{
    printf("📖 HELP MENU 📖\n");
    printf("===================================\n");
    printf("🔄 Convert numbers between Binary, Decimal,\n");
    printf("   and Hexadecimal formats.\n\n");
    printf("📝 Instructions:\n");
    printf("1️⃣ Choose the format you are converting from.\n");
    printf("2️⃣ Enter the number.\n");
    printf("3️⃣ Choose the format you want to convert to.\n");
    printf("4️⃣ View the result!\n");
    printf("===================================\n");
}

int code_base(void)
{
    int convert_from, convert_to;
    char binary[250], hexadecimal[250];
    int decimal;
    char end_loop[5] = "yes";

    clear_screen();
    printf("################# BASE CONVERTER ##########\n");
    printf("============================================\n\n");
    printf("🎉 Welcome to the Base Converter! 🎉\n");

    // Display help menu at the start or upon request
    display_help();

    while (true)
    {
        printf("\n🔄 Choose what you are converting from:\n");
        printf("1️⃣ Binary\n");
        printf("2️⃣ Decimal\n");
        printf("3️⃣ Hexadecimal\n");
        printf("0️⃣ Help\n\n");

        scanf("%d", &convert_from);

        if (convert_from == 0)
        {
            display_help();
            continue;
        }

        if (convert_from < 1 || convert_from > 3)
        {
            printf("❌ Invalid choice. Please enter 1, 2, 3, or 0 for help.\n");
            continue;
        }

        printf("\n🔄 Choose what you are converting to:\n");
        printf("1️⃣ Binary\n");
        printf("2️⃣ Decimal\n");
        printf("3️⃣ Hexadecimal\n");

        scanf("%d", &convert_to);

        if (convert_to < 1 || convert_to > 3)
        {
            printf("❌ Invalid choice. Please enter 1, 2, or 3.\n");
            continue;
        }

        // Input based on conversion type
        if (convert_from == 1)
        {
            printf("🔢 Input the Binary number: ");
            scanf("%s", binary);
        }
        else if (convert_from == 2)
        {
            printf("🔢 Input the Decimal number: ");
            scanf("%d", &decimal);
        }
        else if (convert_from == 3)
        {
            printf("🔢 Input the Hexadecimal number: ");
            scanf("%s", hexadecimal);
        }

        // Perform the conversion
        if (convert_from == 1 && convert_to == 2)
        {
            loading_indicator();
            bin_to_dec(binary);
        }
        else if (convert_from == 2 && convert_to == 1)
        {
            loading_indicator();
            dec_to_bin(decimal);
        }
        else if (convert_from == 1 && convert_to == 3)
        {
            loading_indicator();
            bin_to_hex(binary);
        }
        else if (convert_from == 2 && convert_to == 3)
        {
            loading_indicator();
            dec_to_hex(decimal);
        }
        else if (convert_from == 3 && convert_to == 1)
        {
            loading_indicator();
            hex_to_bin(hexadecimal);
        }
        else if (convert_from == 3 && convert_to == 2)
        {
            loading_indicator();
            hex_to_dec(hexadecimal);
        }
        else if (convert_from == convert_to)
        {
            printf("⚠️ Error: You cannot perform the same operation.\n");
        }
        else
        {
            printf("❌ Error occurred. Provide accurate instructions.\n");
            return (-1);
        }

        printf("\n🔁 Type 'yes' to try again. Type 'no' to end program\n");
        scanf("%s", end_loop);
        if (strcasecmp(end_loop, "no") == 0)
        {
            printf("\n👋 Goodbye! Have a great day! 👋\n");
            break;
        }
        clear_screen();
    }
    return (0);
}