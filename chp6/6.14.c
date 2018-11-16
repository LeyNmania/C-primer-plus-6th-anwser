#include <stdio.h>

int main()
{
    double a[8], b[8];
    int i;

    printf("Enter 8 numbers: ");
    for(i = 0; i < 8; i++)
    {
        scanf("%lf", &a[i]);
        if(!i)
            b[i] = a[i];
        else
            b[i] = b[i-1] + a[i];
    }

    for(i = 0; i < 8; i++)
        printf("%8lf  ", a[i]);
    printf ("\n");
    for (i = 0; i < 8; i++)
        printf("%8lf  ", b[i]);

    return 0;
}
