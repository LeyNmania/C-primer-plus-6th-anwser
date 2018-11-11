#include <stdio.h>
#define a 3.785
#define b 1.609

int main ()
{
    float mile, gallon;

    printf ("Please input miles and gallons:\n");
    scanf ("%f %f", &mile, &gallon);
    printf ("Miles per gallon: %.1f\n", mile / gallon);
    printf ("Litres per 100 kilometres: %.1f", gallon * a / (mile * b) * 100);

    return 0;
}
