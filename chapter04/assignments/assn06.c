#include <stdio.h>

int main()
{
    double mass;
    double speed;

    printf("질량(kg)? ");
    scanf("%lf", &mass);
    printf("속력(m/s)? ");
    scanf("%lf", &speed);

    printf("운동에너지: %.2lf J", 0.5 * mass * speed * speed);

    return 0;
}
