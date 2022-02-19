#include <stdio.h>

int main()
{
    unsigned int data;

    printf("16진수로 데이터를 입력하세요: ");
    scanf("%x", &data);

    printf("byte 0 : %x\n", data & 0xff);
    printf("byte 1 : %x\n", (data & 0xff00) >> 8);
    printf("byte 2 : %x\n", (data & 0xff0000) >> 16);
    printf("byte 3 : %x", (data & 0xff000000) >> 24);

    return 0;
}
