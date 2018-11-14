#include <stdio.h>

int main()
{
    int i=5;
    int j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>0;j--)
            printf("$");
        printf("\n");
    }

    return 0;
}
