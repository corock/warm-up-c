#include <stdio.h>

int main()
{
    int kg, m;

    printf("질량(kg)? ");
    scanf("%d", &kg);

    printf("높이(m)? ");
    scanf("%d", &m);

    // 위치 에너지 구하기
    double potential_energy = 9.8 * kg * m;

    // 연산 결과 출력
    printf("위치에너지: %.2lf", potential_energy);

    return 0;
}
