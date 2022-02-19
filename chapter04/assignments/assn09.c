#include <stdio.h>

int main()
{
    int price, discount_rate, discounted_price;

    printf("제품의 가격? ");
    scanf("%d", &price);
    printf("할인율(%)? ");
    scanf("%d", &discount_rate);

    discounted_price = price * discount_rate / 100.0;

    printf("할인가: %d원 (%d원 할인)", price - discounted_price, discounted_price);

    return 0;
}
