#include <stdio.h>

float add1(int num)
{
    int i;
    float sum = 0.0;

    for(i = 1; i <= num; i++)
        sum += 1.0 / i;

    return sum;
}
float add2(int num)
{
    int i;
    float sum = 0.0;
    int j = -1;

    for(i = 1; i <= num; i++)
    {
        j *= -1;
        sum += (1.0 / i) * j;
    }

    return sum;
}

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);
    if(num >= 0)
        printf("%f", add1(num) + add2(num));
    else
        printf("Wrong ! Exiting ...");
    return 0;
}
