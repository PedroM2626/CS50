#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int cash, count = 0, i;
    do{
        cash = get_int("Change owed: ");}
    while (cash < 1);
    for(i = 0; cash >= 1; i++)
    {
        if(cash >= 25)
        {
            count++;
            cash -= 25;
        }
        else if(cash >= 10)
        {
            count++;
            cash -= 10;
        }
        else if(cash >= 5)
        {
            count++;
            cash -= 5;
        }

        else if(cash >= 1)
        {
            count++;
            cash -= 1;
        }
    }
    printf("%i", count);
}
