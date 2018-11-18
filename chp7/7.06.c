#include <stdio.h>
 
int main()
{
    char ch1, ch2;
    int num = 0;
 
    while((ch1 = getchar()) != '#')
    {
        if((ch1 == 'i') && (ch2 == 'e'))
            num++;
        ch2 = ch1;
    }
 
    printf ("%d", num);
    return 0;
}
