#include <stdio.h>

int main()
{
    int play_time;

    printf("재생 시간(초)? ");
    scanf("%d", &play_time);

    int hour = play_time / 3600;
    int minute = play_time % 3600 / 60;
    int second = play_time % 60;

    printf("재생 시간은 %d시간 %d분 %d초입니다.", hour, minute, second);

    return 0;
}
