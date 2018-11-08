#include <stdio.h>

int main()
{
    float cups;

    printf("请输入杯数：");
    scanf("%f", &cups);

    float pints = cups / 2;
    float ounces = 8 * cups;
    float spoons = 8 * cups * 2;
    float teaspoons = 8 * cups * 2 * 3;

    printf("品脱：%f\t盎司：%f\t汤勺：%f\t茶勺：%f\n", pints, ounces, spoons, teaspoons);

    return 0;
}

//若存在半杯的情况，品脱单位就会舍掉小数位
