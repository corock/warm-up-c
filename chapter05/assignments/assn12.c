#include <stdio.h>

int main()
{
    int N, i;
    int row = 0;

    printf("양의 정수? ");
    scanf("%d", &N);

    for (int prime_number = 2; prime_number < N; prime_number++) {
        for (i = 2; i <= prime_number; i++) {
            if (prime_number % i == 0) {
                break;
            }
        }

        if (prime_number == i) {
            printf("%3d ", prime_number);
            row += 1;

            if (row == 10) {
                puts("");
                row = 0;
            }
        }
    }

    return 0;
}
