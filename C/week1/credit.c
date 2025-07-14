#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>


int main(void)
{
    //var 1
    long number;
    do{
        number = get_long("Send your credit card digits: "); }
    while(number < 0);
    //vars
    string result;
    char str[20];
    sprintf(str, "%ld", number);  // convert long to string
    int firstdigit = str[0] - '0';
    int twofirsdigits = (str[0] - '0') * 10 + (str[1] - '0');
    long numberev = number;
    char str2[20];
    sprintf(str2, "%ld", numberev); // convert long to string
    int len = strlen(str2);
    for (int i = 0; i < len / 2; i++) {
        char temp = str2[i];
        str2[i] = str2[len - i - 1];
        str2[len - i - 1] = temp;
    }

    int sum = 0;

    //part 1
    for (int i = 0; i < len; i++)
    {
        int digito = str2[i] - '0';

        if (i % 2 == 1) // Odd positions
        {
            int prod = digito * 2;
            sum += prod / 10 + prod % 10;
        }
        else
        {
            sum += digito;
        }
    }

    //Transition
    if (sum % 10 != 0)
    {
        result = "INVALID";
    }
    else
    {
        // part 2

        if((number >= pow(10, 14) && number < pow(10, 15)) && (twofirsdigits == 34 || twofirsdigits == 37)){
            result = "AMEX";
        }
        else if((number >= pow(10, 15) && number < pow(10, 16)) && (twofirsdigits >= 51 && twofirsdigits <= 55)){
            result = "MASTERCARD";
        }
        else if(((number >= pow(10, 15) && number < pow(10, 16)) || (number >= pow(10, 12) && number < pow(10, 13))) && firstdigit == 4){
            result = "VISA";
        }
        else{
            result = "INVALID";
        }
    }

    printf("%s\n", result);
}
