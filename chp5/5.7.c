#include <stdio.h>

double cube(double num)
{
    return num * num * num;
}
 
int main()
{
    double num;
 
    printf("Please input a num: ");
    scanf("%lf", &num);
 
    printf("The cube of %lf is %lf", num, cube(num));
 
    return 0;
}
