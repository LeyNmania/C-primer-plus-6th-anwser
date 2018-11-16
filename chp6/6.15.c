#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[255];
    int num;
    int i;
 
    scanf("%s", str);
    num = strlen(str) - 1;
    for (i = num; i >= 0; --i)
        printf("%c", str[i]);
 
    return 0;
}
