#include <stdio.h>
 
int main()
{
    float num;
    float min = 0;
    float max = 100;
    char ch;
 
    printf("Pick an integer from 0 to 100. I will try to guess "
            "it.\nRespond with a y if my guess is right.\n\n"
            "If the number I guess is lower, please input '<', and"
            "\nif it is upper, input '>'.\n");
 
    num = min;
    printf("Is it %f?\n", num);
    while((ch = getchar ())!= 'y')
    {
        if(ch == '<')
        {
            min = num;
            printf ("Is it %f?\n", num = (num + max) / 2);
        }
        else if(ch == '>')
        {
            max = num;
            printf ("Is it %f?\n", num = (num + min) / 2);
        }
    }
 
    printf("The number is %f", num);
 
    return 0;
}
