#include <stdio.h>
#include <string.h>

int main()
{
    char first_name[40];
    char last_name[40];
    int length;

    printf("Enter your first name: ");
    scanf("%s", first_name);
    printf("\nEnter your last name: ");
    scanf("%s",last_name);

    printf("\"%s,%s\"\n", first_name,last_name);
    printf("\"%15s,%s\"\n", first_name,last_name);
    printf("\"%s,%-15s\"\n", first_name,last_name);
    length = strlen(first_name)+strlen(last_name)+ 3;
    printf("%*s,%s", length, first_name,last_name);

    return 0;
}
