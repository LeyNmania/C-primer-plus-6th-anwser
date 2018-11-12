#include <stdio.h>
#define days 7
int main ()
{

    int day;

    printf ("Please input days: ");
    scanf ("%d", &day);

    while (day > 0)
    {
        printf ("%d days are %d weeks, %d days.\n", day, day / days, day %days);
        printf ("Please input days: ");
        scanf ("%d", &day);
    }

    return 0;
}
