#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int count[26] = {0};

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]!='\0'; i++) {
        if(isalpha(str[i]))
            count[toupper(str[i])-'A']++;
    }

    for(int i=0;i<26;i++) {
        if(count[i]>0)
            printf("%c : %d\n", i+'A', count[i]);
    }

    return 0;
}