#include <stdio.h>
 
int main()
{
    int year = 0;
    double sum = 100.0;
 
    while(sum >= 0)
    {
        sum *= 1.08;
        sum -= 10.0;
        ++year;
    }
 
    printf("%d", year);
 
    return 0;
}
