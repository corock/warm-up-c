#include <stdio.h>

int main()
{
    double g;
    double volume;
    double density;

    printf("질량(g)? ");
    scanf("%lf", &g);
    printf("부피(세제곱센티미터)? ");
    scanf("%lf", &volume);

    density = g / volume;

    printf("밀도: %lf", density);

    return 0;
}
