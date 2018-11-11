#include <stdio.h>
#include <string.h>

int main ()
{
    char last[20], first[20];
    int a, b;

    printf ("Please input your first name:\n");
    scanf ("%s", first);
    printf ("Please input your last name:\n");
    scanf ("%s", last);
    a = strlen (first);
    b = strlen (last);

    printf ("%s %s\n", first, last);
    printf ("%*d %*d\n", a, a, b, b);
    printf ("%s %s\n", first, last);
    printf ("%*d %*d", -a, a, -b, b);

    return 0;
}
