#include <stdio.h>

void octal(int n) {
    if(n==0) return;
    octal(n/8);
    printf("%d", n%8);
}

void hexa(int n) {
    if(n==0) return;
    hexa(n/16);
    if(n%16<10)
        printf("%d", n%16);
    else
        printf("%c", n%16-10+'A');
}

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    printf("Binary: ");
    for(int i=31;i>=0;i--)
        printf("%d", (n>>i)&1);

    printf("\nOctal: ");
    octal(n);

    printf("\nHexadecimal: ");
    hexa(n);

    return 0;
}