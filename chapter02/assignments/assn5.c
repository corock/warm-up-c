#include <stdio.h>

int main()
{
    float dollar;

    printf("달러? ");
    scanf("%f", &dollar);

    // 1. 변수 선언
    int won;

    // 2. 변수 사용(초기화: 값을 넣는 행위)
    won = dollar * 1000;

    // printf("$%.2f는 %.0f원입니다.", dollar, dollar * 1000);
    printf("$%.2f는 %d원입니다.", dollar, won);

    return 0;
}
