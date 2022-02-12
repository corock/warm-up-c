#include <stdio.h>

int main()
{
    int num;

    printf("양의 정수? ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("%d는 소수가 아닙니다.", num);
            return 0;
        }
    }

    printf("%d는 소수입니다.", num);

    return 0;
}
