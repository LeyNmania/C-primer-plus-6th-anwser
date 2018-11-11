#include <stdio.h>

int main()
{
    float download_speed;
    float file_size;

    printf("Input download speed in Mb/s: ");
    scanf("%f",&download_speed);
    printf("Input file_size in MB: ");
    scanf("%f",&file_size);

    printf("At %.2f megabits per seconds, a file of %.2f megabytes\ndownloads in %.2f seconds.",download_speed,file_size,(float)(8*file_size/download_speed));
    return 0;

}
