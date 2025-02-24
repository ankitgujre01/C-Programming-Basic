#include <stdio.h>

int main() {
    char name[20];
    int rollNo;
    float sub1, sub2, sub3, sub4, sum, score;

    printf("\nEnter name of student: ");
    scanf("%s", name);

    printf("\nEnter Roll Number: ");
    scanf("%d", &rollNo);

    printf("\nEnter Marks in 4 Subjects (out of 100): ");
    scanf("%f %f %f %f", &sub1, &sub2, &sub3, &sub4);

    sum = sub1 + sub2 + sub3 + sub4;
    score = (sum / 400) * 100;

    printf("\nName of student: %s", name);
    printf("\nRoll Number: %d", rollNo);
    printf("\nPercentage score secured: %.2f%%", score);

    return 0;
}

