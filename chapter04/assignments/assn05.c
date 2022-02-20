#include <stdio.h>

int main()
{
    double fahrenheit;

    printf("화씨온도? ");
    scanf("%lf", &fahrenheit);

    printf("%.0lf F == %.2lf C", fahrenheit, (fahrenheit - 32) * 5 / 9);

    return 0;
}
