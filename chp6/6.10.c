#include <stdio.h>
 
int add(int min, int max)
{
    int i;
    int sum = 0;
 
    for(i = min; i <= max; i++)
        sum += i*i;
 
    return sum;
}
 
int main()
{
    int min, max;
 
    printf("Enter lower and upper integer limits: ");
    while((scanf("%d %d", &min, &max)) == 2)
    {
        if(min >= max)
            break;
        printf("The sum of the squares from %d to %d is %d\n", min*min, max*max, add(min, max));
        printf("Enter lower and upper integer limits: ");
    }
    printf("Done");
 
    return 0;
}
