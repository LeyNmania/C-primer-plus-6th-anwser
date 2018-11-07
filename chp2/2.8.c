#include <stdio.h>

void two()
{
    printf("two");
}
void one_three()
{
    printf("one\n");
    two();
    printf("\nthree");
}

int main()
{
    printf("starting now :\n");
    one_three();
    printf("\ndone!");
    return 0;
}
