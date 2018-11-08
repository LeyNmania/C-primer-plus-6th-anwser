#include <stdio.h>

int main()
{
    float height_in_inch = 0;
    float height_in_cm = 0;
    printf("What's your height in inch:");
    scanf("%f", &height_in_inch);

    height_in_cm = height_in_inch * 2.54;
    printf("Your height is %f in cm\n", height_in_cm);

    return 0;
}
