#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    if(isupper(ch))
        printf("Uppercase letter\n");
    else if(islower(ch))
        printf("Lowercase letter\n");
    else if(isdigit(ch))
        printf("Digit\n");
    else
        printf("Special character\n");

    return 0;
}