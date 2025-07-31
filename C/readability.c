#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    string text = get_string("text: ");
    int countL = 0;
    int countS = 0;
    int countW = 1;
    for (int i = 0; i< strlen(text); i++){
        if (isalpha(text[i]))
        {
            countL++;
        }
        if (text[i] == ' ')
        {
            countW++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            countS++;
        }
    }


    float L = ((float)countL / countW) * 100;
    float S = ((float)countS / countW) * 100;
    float finalscore = 0.0588 * L - 0.296 * S - 15.8;

    if (finalscore < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (finalscore > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int)round(finalscore));
    }
}
