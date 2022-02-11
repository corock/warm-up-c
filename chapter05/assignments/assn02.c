#include <stdio.h>

int main()
{
    int rank, total;
    char grade;

    printf("등수? ");
    scanf("%d", &rank);
    printf("전체 인원수? ");
    scanf("%d", &total);

    float percentage = (float) rank / total * 100;

    if (percentage <= 10) {
        grade = 'A';
    } else if (percentage <= 30) {
        grade = 'B';
    } else if (percentage <= 60) {
        grade = 'C';
    } else if (percentage <= 90) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("학점: %c", grade);

    return 0;
}
