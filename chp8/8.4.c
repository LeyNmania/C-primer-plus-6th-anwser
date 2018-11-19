#include <stdio.h>
#include <ctype.h>
 
int main()
{
    char ch;
    int i = 0, j = 1;
 
    while((ch = getchar ())!= EOF)
    {
        if(ch == ' ')
            j++;
        else if(ispunct (ch))
            j++;
        else
            i++;
    }
 
    printf ("平均字母数：%f", (float)(i - 1) / j);
 
    return 0;
}
