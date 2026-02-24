#include <stdio.h>
#include <string.h>

struct emp {
    char fname[20];
    char lname[20];
    double salary;
};

void emp_init(struct emp *e, char *fn, char *ln, double sal) {
    strcpy(e->fname, fn);
    strcpy(e->lname, ln);
    e->salary = sal;
}

void set_salary(struct emp *e, double sal) {
    e->salary = sal;
}

void emp_display(struct emp *e) {
    printf("%s %s - Monthly Salary: %.2lf\n",
           e->fname, e->lname, e->salary);
}

int main() {
    struct emp e1, e2;

    emp_init(&e1,"John","Doe",2000);
    emp_init(&e2,"Jane","Smith",3000);

    emp_display(&e1);
    emp_display(&e2);

    printf("Yearly Salary:\n");
    printf("E1: %.2lf\n", e1.salary*12);
    printf("E2: %.2lf\n", e2.salary*12);

    set_salary(&e1, e1.salary*1.10);
    set_salary(&e2, e2.salary*1.10);

    printf("After 10%% raise:\n");
    printf("E1: %.2lf\n", e1.salary*12);
    printf("E2: %.2lf\n", e2.salary*12);

    return 0;
}