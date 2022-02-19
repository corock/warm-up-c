#include <stdio.h>

int main()
{
    unsigned int month;

    printf("몇 월? ");
    scanf("%u", &month);

    (1 <= month && month <= 12) ? printf("올바른 값입니다.") : printf("잘못된 값입니다.");

    return 0;
}
