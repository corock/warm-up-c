#include <stdio.h>

int main()
{
    int basic_rate, kWh;

    printf("기본 요금? ");
    scanf("%d", &basic_rate);
    printf("월 사용량 (kWh)? ");
    scanf("%d", &kWh);

    printf("전기 요금: %d원", basic_rate + kWh * 190);

    return 0;
}
