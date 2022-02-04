#include <stdio.h>

int main()
{
    float pi_float = 3.14159265f;
    double pi_double = 3.14159265;

    puts("=== float data type ===");
    printf("pi = %.2lf\n", pi_float);
    printf("pi = %.4lf\n", pi_float);
    printf("pi = %.6lf\n", pi_float);
    printf("pi = %.8lf\n", pi_float);
    printf("pi = %e\n", pi_float);

    puts("");

    puts("=== double data type ===");
    printf("pi = %.2lf\n", pi_double);
    printf("pi = %.4lf\n", pi_double);
    printf("pi = %.6lf\n", pi_double);
    printf("pi = %.8lf\n", pi_double);
    printf("pi = %e", pi_double);

    return 0;
}
