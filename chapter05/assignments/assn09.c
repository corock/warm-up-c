#include <stdio.h>

int main()
{
    unsigned int positive_integer;
    int multiple_count;

    printf("양의 정수? ");
    scanf("%u", &positive_integer);
    printf("배수의 개수? ");
    scanf("%d", &multiple_count);

    for (int i = 1; i <= multiple_count; i++) {
        printf("%u ", positive_integer * i);
    }

    return 0;
}
