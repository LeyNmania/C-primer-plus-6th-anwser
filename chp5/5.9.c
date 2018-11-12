#include <stdio.h>
 
void Temperatures (double F);
 
int main()
{
    double F;
 
    printf("Enter a temperature: ");
    while(scanf ("%lf", &F))
    {
        Temperatures (F);
        printf ("Enter a temperature(Enter 'q' to quit): ");
    }
 
 
    return 0;
}
 
 
void Temperatures (double F)
{
    double K, C;
    const double a = 5.0 / 9.0, b = 32.0, c = 273.16;
 
    C = a * (F - b);
    K = C + c;
 
    printf("F: %.2f\nC: %.2f\nK: %.2f\n", F, C, K);
}
