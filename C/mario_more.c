#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, i, j, k,l, m;

    do
    {
        height = get_int("What is the height?\n");
    }
    while (height < 1);

    if (height > 0){
        for (i = 0; i < height; i++)
        {
            //part 1
            for (j = 0; j < height - i - 1; j++)
            {
                printf(" ");
            }
            for (k = 0; k <= i; k++)
            {
                printf("#");
            }
            //part 2
            for (l = 0; l < 2; l++)
            {
                printf(" ");
            }
            for (m = 0; m <= i; m++)
            {
                printf("#");
            }

            printf("\n");
        }
    }
}
