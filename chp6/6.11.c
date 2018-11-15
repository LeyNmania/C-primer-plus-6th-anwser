#include <stdio.h>

int main()
{
    int in[8];
    int i;

    printf("Enter 8 numbers: ");
    for (i = 0; i < 8; i++)
        scanf("%d", &in[i]);

    for (i = 7; i >= 0; i--)
        printf("%d\n", in[i]);

    return 0;
}

