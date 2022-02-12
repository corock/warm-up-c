#include <stdio.h>

int main()
{
    int kWh;
    printf("월 사용량 (kWh)? ");
    scanf("%d", &kWh);

    int demand_charge = 0;
    int energy_charge = 0;
    int total_charge = 0;

    if (kWh <= 300) {
        demand_charge = 1000;
        energy_charge += kWh * 100;
        // total_charge = demand_charge + energy_charge;
    } else {
        demand_charge = 5000;
        energy_charge += 300 * 100 + (kWh - 300) * 200;
    }

    total_charge = demand_charge + energy_charge;

    printf("전기 요금 합계: %6d원\n", total_charge);
    printf("  - 기본 요금: %7d원\n", demand_charge);
    printf("  - 전력량요금: %6d원", energy_charge);

    return 0;
}
