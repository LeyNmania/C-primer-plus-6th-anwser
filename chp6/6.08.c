#include <stdio.h>

int main()
{
    double min, max;

    printf("Enter two numbers:\n");

    while(scanf("%lf %lf", &min, &max) == 2)
    {
        printf("%lf\n", (min - max > 0 ? min-max : max-min) / (min*max));
        printf("Enter two numbers:\n");
    }

    return 0;
}
