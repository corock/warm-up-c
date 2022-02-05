#include <stdio.h>

int main()
{
    int usd;
    int exchange_rate;
    double krw;

    printf("USD? ");
    scanf("%d", &usd);

    printf("원/달러 환율? ");
    scanf("%u", &exchange_rate);

    krw = usd * exchange_rate;

    // 연산 결과 출력
    printf("USD %d = KRW %.2lf", usd, krw);

    return 0;
}
