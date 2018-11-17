#include <stdio.h>

int main()
{
    int num;
    int odd = 0, even = 0;
    int odd_sum = 0, even_sum = 0;
 
    while((scanf("%d", &num)) == 1)
    {
        if(num == 0)
            break;
        else if(num % 2 == 0)
        {
            even++;
            even_sum += num;
        }
        else if(num % 2 == 1)
        {
            odd++;
            odd_sum += num;
        }
 
    }
 
    printf("odd: %d average: %f\n", odd, (float)odd_sum / odd);
    printf("even: %d average: %f", even, (float)even_sum / even);
 
    return 0;

}
