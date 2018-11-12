#include <stdio.h>
#define inch 2.54

int main (void)
{
    float height;

    printf ("Enter a height in centimeters: ");
    scanf ("%f", &height);

    while (height > 0)
    {
        printf ("%.1f cm = %d feet, %.1f inches\n", height, (int)(height / inch / 12), height / inch - (int)(height / inch / 12) * 12);
        printf ("Enter a height in centimeters (<=0 to quit): ");
        scanf ("%f", &height);
    }
    printf("bye");
    return 0;
}
