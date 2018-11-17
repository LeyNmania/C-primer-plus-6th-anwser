#include <stdio.h>

int main()
{
    char a;
    int num1 = 0, num2 = 0;
 
    while((a = getchar ()) != '#')
    {
        if(a == '.')
        {
            putchar ('!');
            num1++;
        }
        else if(a == '!')
        {
            putchar ('!');
            putchar ('!');
            num2++;
        }
        else putchar (a);
    }
    printf("'.' to '!': %d\n'!' to '!!': %d", num1, num2);
 
    return 0;
}
