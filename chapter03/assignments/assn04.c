#include <stdio.h>

int main()
{
    double base, height, area;

    printf("밑변과 높이? ");
    scanf("%lf %lf", &base, &height);

    // 직각삼각형의 넓이 구하기
    area = base * height * 0.5;

    // 연산 결과 출력
    printf("직각삼각형의 면적: %.2lf", area);

    return 0;
}
