#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("점수? ");
    scanf("%u", &score);

    score /= 10;

    switch (score) {
    case 10:
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    default:
        grade = 'F';
        break;
    }

    printf("학점: %c", grade);

    return 0;
}
