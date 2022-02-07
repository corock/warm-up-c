#include <stdio.h>

int main()
{
    float in;
    float cm;

    printf("길이(in)? ");
    scanf("%f", &in);

    // inches to centimeteres
    cm = in * 2.54f;

    // 연산 결과 출력
    printf("%.2f in = %.2f cm", in, cm);

    return 0;
}
