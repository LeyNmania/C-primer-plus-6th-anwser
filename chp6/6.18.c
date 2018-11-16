#include <stdio.h>
 
int main()
{
    int i = 1;
    int f = 5;
 
    while(f < 150)
    {
        f = (f - i) * 2;
        printf("week %d: friends: %d\n", i, f);
        ++i;
    }
 
    return 0;
}
