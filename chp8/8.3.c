#include <stdio.h>

int main()
{
    char ch;
    int i, j;

    i = j = 0;
    while((ch = getchar ()) != EOF)
    {
        if((ch >= 'a') && (ch <= 'z'))
            j++;
        else if ((ch >= 'A') && (ch <= 'Z'))
            i++;
    }

    printf("大写字母数量：%d\n小写字母数量：%d", i, j);

    return 0;
}
