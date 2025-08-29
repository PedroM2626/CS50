#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, i, j, k;

    do
    {
        height = get_int("What is the height?\n");
    }
    while (height < 1);

    if (height > 0){
        for (i = 0; i < height; i++)
        {
            for (j = 0; j < height - i - 1; j++)
            {
                printf(" ");
            }
            for (k = 0; k <= i; k++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}
