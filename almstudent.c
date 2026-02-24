#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp((char*)a, (char*)b);
}

int main() {
    char names[10][50];
    int n;

    printf("Enter number of students (max 10): ");
    scanf("%d", &n);

    for(int i=0;i<n;i++)
        scanf("%s", names[i]);

    qsort(names, n, sizeof(names[0]), compare);

    printf("Sorted Names:\n");
    for(int i=0;i<n;i++)
        printf("%s\n", names[i]);

    return 0;
}