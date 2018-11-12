#include <stdio.h>
#define minute 60

int main ()
{
    int Minute;

    printf("Please input time in minute: \n");
    scanf("%d", &Minute);

    while( Minute > 0)
    {
        printf ("time is %d : %d\n", Minute / minute, Minute % minute);
        printf ("Please input time in minute: \n");
        scanf ("%d", &Minute);
    }

    return 0;
}
