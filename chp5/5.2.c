#include <stdio.h>

int main ()
{
    int num;
    int i;
 
    printf("Please input a number: ");
    scanf("%d", &num);
 
    for (i = 0; i <= 10; i++)
    {
        printf ("%d\n", num + i);
    }
 
    return 0;
}
