#include <stdio.h>

int main()
{
    int yd;
    double m;

    printf("길이(yd)? ");
    scanf("%d", &yd);

    // yard to meter
    m = yd * 0.9144;

    // 연산 결과 출력
    printf("%d yd = %lf m", yd, m);

    return 0;
}
