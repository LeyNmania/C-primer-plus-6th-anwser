#include <stdio.h>
 
int main()
{
    int a, b;
 
    printf("This program computes moduli.\n");
    printf("Enter am integer to serve as the second operand: ");
    scanf("%d", &a);
    printf("Now enter the first operand: ");
    scanf("%d", &b);
 
    while (b > 0)
    {
        printf("%d %% %d is %d\n", b, a, b % a);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &b);
    }
 
    return 0;
}
