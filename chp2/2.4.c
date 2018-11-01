#include <stdio.h>
void jolly()
{
    printf("For he`s a jolly good fellow! \n");
}
void deny()
{
    printf("Which nobody can deny! ");
}
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        jolly();
    }
    deny();
    return 0;
}
