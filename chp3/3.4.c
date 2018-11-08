#include <stdio.h>

int main()
{
    float i;
    printf("Enter a floating-point value:");
    scanf("%f", &i);

    printf("fixed-point notation:%f\n", i); //float默认只保留小数部分6位的精度
    printf("exponential notation:%e\n", i);
    printf("p notation:%a\n", i);
    return 0;
}
