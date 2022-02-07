#include <stdio.h>

int main()
{
    // 가로(width), 세로(height), 넓이(area), 둘레(perimeter) 변수 선언
    unsigned int width;
    unsigned int height;
    unsigned int area;
    unsigned int perimeter;

    printf("가로의 길이? ");
    scanf("%u", &width);

    printf("세로의 길이? ");
    scanf("%u", &height);

    // 직사각형의 넓이(area) 연산
    area = width * height;

    // 직사각형의 둘레(perimeter) 연산
    perimeter = (width * 2) + (height * 2);

    // 연산 결과 출력
    printf("직사각형의 넓이: %u\n", area);
    printf("직사각형의 둘레: %u", perimeter);

    return 0;
}
