#include <stdio.h>
 
int main()
{
    int space = 0, line = 0, other = 0;
    char a;
 
    printf("input a string finished by \"#\": ");
    while((a = getchar ()) != '#')
        if(a == ' ')
            space++;
        else if(a == '\n')
            line++;
        else
            other++;
 
    printf("space: %d\nline break: %d\nother: %d", space, line, other);
 
    return 0;
}
