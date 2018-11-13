#include <stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=6;i++)
    {
        char c='F';
        for(j=0;j<i;j++)
            printf("%c",c-j);
        printf("\n");
    }
    return 0;
}
