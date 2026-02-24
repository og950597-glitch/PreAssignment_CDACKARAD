#include <stdio.h>

struct Student {
    char studentName[50];
    char rollNo[20];
    float totalMarks;
};

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.studentName);

    printf("Enter Roll No: ");
    scanf("%s", s.rollNo);

    printf("Enter Total Marks: ");
    scanf("%f", &s.totalMarks);

    printf("\nStudent Data:\n");
    printf("Name: %s\nRoll No: %s\nMarks: %.2f\n",
            s.studentName, s.rollNo, s.totalMarks);

    return 0;
}