#include <stdio.h>

int main()
{
    // 변(side)의 길이를 저장할 변수 선언
    unsigned int side;
    unsigned int area;
    unsigned int perimeter;

    printf("한 변의 길이 ? ");
    scanf("%u", &side);

    // 정사각형의 넓이(area) 연산
    area = side * side;

    // 정사각형의 둘레(perimeter) 연산
    perimeter = side * 4;

    // 연산 결과 출력
    printf("정사각형의 넓이: %u\n", area);
    printf("정사각형의 둘레: %u", perimeter);

    return 0;
}
