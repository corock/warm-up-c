#include <stdio.h>

int main()
{
    int x, y, quadrant;

    printf("점의 좌표 (x, y)? ");
    scanf("%d %d", &x, &y);

    // if (x > 0 && y > 0) {
    //     printf("1사분면에 있습니다.");
    // } else if (x < 0 && y > 0) {
    //     printf("2사분면에 있습니다.");
    // } else if (x < 0 && y < 0) {
    //     printf("3사분면에 있습니다.");
    // } else {
    //     printf("4사분면에 있습니다.");
    // }

    if (x > 0 && y > 0) {
        quadrant = 1;
    } else if (x < 0 && y > 0) {
        quadrant = 2;
    } else if (x < 0 && y < 0) {
        quadrant = 3;
    } else {
        quadrant = 4;
    }

    printf("%d사분면에 있습니다.", quadrant);

    return 0;
}
