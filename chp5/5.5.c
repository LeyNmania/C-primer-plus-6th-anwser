#include <stdio.h>

int main()
{
    int day, sum = 0;
    int i;

    printf("Please input days: ");
    scanf("%d", &day);

    for (i = 1; i <= day; i++)
    {
        sum += i;
    }

    printf ("sum = %d", sum);

    return 0;
}
