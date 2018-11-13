#include <stdio.h>
 
int main()
{
    int num = 26;
    int i;
    char letter[26];
    char ch = 'a';
 
    for (i = 0; i < num; i++, ch++)
    {
        letter[i] = ch;
    }
    for (i = 0; i < 26; i++)
    {
        printf("%c", letter[i]);
    }
 
    return 0;
}
