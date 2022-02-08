#include <stdio.h>

int main()
{
    int year;
    int is_leap_year = 0;

    printf("연도? ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                is_leap_year = 1;
            }
        } else {
            is_leap_year = 1;
        }
    }

    if (is_leap_year) {
        printf("%d년은 윤년입니다.", year);
    }

    return 0;
}
