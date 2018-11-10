#include <stdio.h>

int main()
{
    char first_name[40];
    char last_name[40];
    printf("What's your first name:");
    scanf("%s", first_name);

    printf("What's your last name:");
    scanf("%s", last_name);

    getchar();

    printf("%s , %s\n",first_name,last_name);

    return 0;
}
