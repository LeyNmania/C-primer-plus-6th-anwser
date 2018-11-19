#include <stdio.h>
 
int main()
{
    int ch;
    int i = 0;
 
    while((ch = getchar()) != EOF)
        i++;
 
    printf("字符数是：%d\n", i);
 
    return 0;
}
