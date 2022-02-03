#include <stdio.h>

int main()
{
    int hour, minute, second;

    printf("시? ");
    scanf("%d", &hour);
    printf("분? ");
    scanf("%d", &minute);
    printf("일? ");
    scanf("%d", &second);

    printf("입력한 날짜는 %d년 %d월 %d일 입니다.", hour, minute, second);

    return 0;
}
