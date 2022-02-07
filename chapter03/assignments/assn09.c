#include <stdio.h>

int main()
{
    double square_meter, square_feet;

    printf("아파트의 면적(제곱미터)? ");
    scanf("%lf", &square_meter);

    square_feet = square_meter * 0.3025;

    printf("%.2lf 제곱미터 = %.2lf 평", square_meter, square_feet);

    return 0;
}
