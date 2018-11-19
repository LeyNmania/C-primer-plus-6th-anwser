#include <stdio.h>

int main()
{
    int ch;
    int i;
    int j = 0;

    while((ch = getchar()) != EOF)
    {
        printf("%c: %d  ", ch, ch);
        j++;
        if(j % 10 == 0)
        {
            printf ("\n");
            j = 0;
        }
    }
    return 0;
}
