#include <stdio.h>
int main()
{
    int age , day;
    printf("Please input your age : ");
    scanf("%d",&age);
    day = age * 365;
    printf("Age is %d , total are %d days .",age,day);

    return 0;
}
