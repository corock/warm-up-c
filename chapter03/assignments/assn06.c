#include <stdio.h>

int main()
{
    float krw, exchange_rate, usd;

    printf("KRW? ");
    scanf("%f", &krw);

    printf("원/달러 환율? ");
    scanf("%f", &exchange_rate);

    usd = krw / exchange_rate;

    // 연산 결과 출력
    printf("KRW %.0f = USD %.2f", krw, usd);

    return 0;
}
