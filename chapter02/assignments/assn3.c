#include <stdio.h>

int main()
{
    // 1. 변수 선언(시, 분, 초는 음수의 개념이 없는 정수이므로 unsigned int)
    unsigned int year, month, day;

    // unsigned int의 서식 지정자는 %u(unsigned의 u)
    printf("연? ");
    scanf("%u", &year);
    printf("월? ");
    scanf("%u", &month);
    printf("일? ");
    scanf("%u", &day);

    printf("입력한 날짜는 %u년 %u월 %u일 입니다.", year, month, day);

    return 0;
}
