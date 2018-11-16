#include <stdio.h>
 
double de(int num);
double da(int num);
 
int main()
{
    int num = 1;
 
    while( de(num) <= da(num) )
        num++;
    printf("year: %d\nDeirdre: %lf\nDaphne: %lf", num, de (num), da (num));
 
    return 0;
}
 
 
double de(int num)
{
    double sum = 100.0;
    int i;
 
    for(i = 1; i <= num; i++)
        sum *= 1.05;
 
    return sum;
}
 
 
double da(int num)
{
    double sum = 100.0;
    int i;
 
    for(i = 1; i <= num; i++)
        sum += 100.0 * 0.1;
 
    return sum;
}
