#include <stdio.h>

int main()
{
    // 용매(solvent), 용질(solute)
    // int solvent, solute;
    int g1, g2;

    printf("용매(g)? ");
    scanf("%d", &g1);
    printf("용질(g)? ");
    scanf("%d", &g2);

    printf("농도: %.2lf %%", (float) g2 / (g1 + g2) * 100);

    return 0;
}
