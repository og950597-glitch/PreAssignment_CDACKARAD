#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    if(percentage >= 90)
        printf("Grade: Ex\n");
    else if(percentage >= 80)
        printf("Grade: A\n");
    else if(percentage >= 70)
        printf("Grade: B\n");
    else if(percentage >= 60)
        printf("Grade: C\n");
    else
        printf("Grade: F\n");

    return 0;
}