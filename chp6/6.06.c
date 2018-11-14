
#include <stdio.h>

void print (int min, int max)
{
    int i;
 
    for(i = min; i <= max; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }
}
 
int main()
{
    int low, high;
 
    printf("Enter the min and max:\n");
    scanf("%d %d", &low, &high);
 
    print(low, high);
 
    return 0;
}
 
 

