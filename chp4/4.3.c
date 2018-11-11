#include <stdio.h>

int main()
{
    float a;
    printf("Input a float number: ");
    scanf("%f",&a);
    printf ("Output is %.1f, or %.1e\n", a, a);
    printf ("Output is %.3f, or %.3E", a, a);

    return 0;
}
