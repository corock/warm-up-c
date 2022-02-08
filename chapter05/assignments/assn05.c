#include <stdio.h>

int main()
{
    double temperature;
    char unit;

    printf("온도? ");
    scanf("%lf %c", &temperature, &unit);

    if (unit == 'C') {
        printf("%.2lf C == %.2lf F", temperature, (temperature * 9 / 5) + 32);
    } else if (unit == 'F') {
        printf("%.2lf F == %.2lf C", temperature, (temperature - 32) * 5 / 9);
    }

    return 0;
}
