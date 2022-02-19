#include <stdio.h>

int main()
{
    int kWh = 0;
    printf("월 사용량 (kWh)? ");
    scanf("%d", &kWh);

    printf("전기 요금: %d원", kWh * 190);

    return 0;
}
