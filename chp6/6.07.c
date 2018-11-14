#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int max;
    int i;

    printf("Enter a word:\n");
    scanf("%s", str);
    max = strlen(str) - 1;

    for (i = max; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
