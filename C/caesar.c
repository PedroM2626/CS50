#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]) % 26;

    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    // cifra logic
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = plaintext[i];

        if (isupper(c))
        {
            printf("%c", (c - 'A' + key) % 26 + 'A');
        }
        else if (islower(c))
        {
            printf("%c", (c - 'a' + key) % 26 + 'a');
        }
        else
        {
            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}
