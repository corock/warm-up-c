#include <stdio.h>

int main()
{
    double real_number;

    printf("실수? ");
    scanf("%lf", &real_number);

    printf("제곱: %e\n", real_number * real_number);
    printf("세제곱: %e", real_number * real_number * real_number);

    return 0;
}
