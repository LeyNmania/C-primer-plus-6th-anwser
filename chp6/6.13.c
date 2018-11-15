#include <stdio.h>
#include <math.h>
 
int main()
{
    int in[8];
    int i;
 
    for (i = 0; i < 8; i++)
        in[i] = pow(2, i);
 
    i = 0;
    do
    {
        printf("%d\n", in[i]);
        i++;
    }
    while(i < 8);
 
    return 0;
}
