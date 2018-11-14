#include <stdio.h>

double cal(double min, double max)
{
    return (min-max > 0 ? min-max : max-min) / (min*max);
}
 
int main()
{
    double min, max;
 
    printf("Enter two numbers:\n");
 
    while(scanf("%lf %lf", &min, &max) == 2)
    {
        printf("%lf\n", cal(min, max));
        printf("Enter two numbers:\n");
    }
 
    return 0;
}
