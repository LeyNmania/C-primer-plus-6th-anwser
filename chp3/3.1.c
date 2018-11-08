#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2147483647;
    float b = 3.4E38 * 100.0f;
    float c = (3.4E-38) / (100.0E100);
    printf("%d %d %d\n", a, a+1, a+2); //整数上溢
    printf("%e\n", b);                 //浮点数上溢
    printf("%e", c);                   //浮点数下溢
    return 0;
}
