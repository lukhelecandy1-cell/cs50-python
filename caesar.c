#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Step 1 - check that user gave exactly one argument

   if (argc != 2)
{
    printf("Usage: ./caesar key\n");
    return 1;
}

    // Step 2 - check that the argument is a number

    for (int i = 0; i < strlen(argv[1]); i++)
{
    if (!isdigit(argv[1][i]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

    // Step 3 - convert argument to integer using atoi

   int k = atoi(argv[1]);

    // Step 4 - get plaintext from user

    string plaintext = get_string("plaintext: ");

    
    // Step 5 - loop through each character and encrypt it

    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'A' + k) % 26 + 'A');
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'a' + k) % 26 + 'a');
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}
