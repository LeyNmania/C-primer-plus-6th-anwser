#include <stdio.h>

int main()
{
    char ch;
 
    while((ch = getchar ()) != '#')
    {
        switch(ch)
        {
        case '.':
            putchar ('!');
            continue;
        case '!':
            putchar ('!');
            putchar ('!');
            continue;
        default:
            putchar (ch);
        }
    }
 
    return 0;
}
