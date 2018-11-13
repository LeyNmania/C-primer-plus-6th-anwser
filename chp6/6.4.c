#include <stdio.h>

int main()
{
    int i,j;
    char c='A';
    int n=0;
    for(i=1;i<=6;i++)
    {

        for(j=0;j<i;j++)
            printf("%c",c+n++);
        printf("\n");
    }
    return 0;
}
