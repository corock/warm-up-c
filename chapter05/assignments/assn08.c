#include <stdio.h>

int main()
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 24; j++) {
            printf("%c ", 32 + j + i * 24);
        }
        puts("");
    }

    return 0;
}
