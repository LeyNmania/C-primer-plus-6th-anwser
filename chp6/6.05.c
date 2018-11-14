#include <stdio.h>

int main()
{
    int i, j;
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);
    for(i = 0; i < ch-'A'+1; i++)
    {

        for (j = 0; j < ch-'A'+1-i; j++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("%c", 'A'+j);
        }

        for(j = i-1; j >= 0; j--)
        {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
