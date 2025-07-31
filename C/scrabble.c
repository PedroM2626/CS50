#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    char letra;
    int valor;
} Dicionario;

int main(void)
{
    Dicionario dict[] = {
        {'A', 1}, {'B', 3}, {'C', 3}, {'D', 2}, {'E', 1},
        {'F', 4}, {'G', 2}, {'H', 4}, {'I', 1}, {'J', 8},
        {'K', 5}, {'L', 1}, {'M', 3}, {'N', 1}, {'O', 1},
        {'P', 3}, {'Q',10}, {'R', 1}, {'S', 1}, {'T', 1},
        {'U', 1}, {'V', 4}, {'W', 4}, {'X', 8}, {'Y', 4},
        {'Z',10}
    };
    int n = sizeof(dict) / sizeof(dict[0]);

    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");

    int score1 = 0, score2 = 0;

    // Player 1 logic
    for (int i = 0; i < strlen(player1); i++)
    {
        char c = toupper(player1[i]);
        for (int j = 0; j < n; j++)
        {
            if (c == dict[j].letra)
            {
                score1 += dict[j].valor;
                break;
            }
        }
    }

    // Player 2 logic
    for (int i = 0; i < strlen(player2); i++)
    {
        char c = toupper(player2[i]);
        for (int j = 0; j < n; j++)
        {
            if (c == dict[j].letra)
            {
                score2 += dict[j].valor;
                break;
            }
        }
    }

    // results
    if (score1 > score2)
        printf("Player 1 wins!\n");
    else if (score2 > score1)
        printf("Player 2 wins!\n");
    else
        printf("Tie!\n");

    return 0;
}
