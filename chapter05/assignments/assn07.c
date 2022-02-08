#include <stdio.h>

int main()
{
    int expr1, expr2;
    char operator;
    int result;

    printf("비트 연산식? ");
    scanf("%x %c %x", &expr1, &operator, &expr2);

    if (operator == '&') {
        result = expr1 & expr2;
    } else if (operator == '|') {
        result = expr1 | expr2;
    } else if (operator == '^') {
        result = expr1 ^ expr2;
    } else {
        puts("잘못된 연산자를 입력했습니다.");
    }

    printf("%X %c %X = %X", expr1, operator, expr2, result);

    return 0;
}
