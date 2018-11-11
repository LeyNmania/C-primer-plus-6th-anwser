#include <stdio.h>

int main()
{
    float height;
    char name[10];
    printf("Input your height in inches: ");
    scanf("%f",&height);
    printf("Input your name: ");
    scanf("%s",name);

    printf ("%s, you are %.3f feet tall", name, height);
    return 0;
}
