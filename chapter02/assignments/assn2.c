#include <stdio.h>

int main()
{
    // 1. 변수 선언(시, 분, 초는 음수의 개념이 없으므로 unsigned)
    unsigned int hour, minute, second;

    // 2. 변수를 선언한 이후에는 모두 변수를 사용하는 부분
    printf("시? ");
    scanf("%u", &hour);
    printf("분? ");
    scanf("%u", &minute);
    printf("초? ");
    scanf("%u", &second);

    // 서식 지정자 중간의 숫자는 자릿수를 의미하며, 0을 넣으면 빈 자리는 0으로 채움
    printf("입력한 시간은 %02u:%02u:%02u입니다.", hour, minute, second);

    return 0;
}
