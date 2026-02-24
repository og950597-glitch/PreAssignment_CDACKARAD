#include <stdio.h>
#include <string.h>

int main() {
    char *arr[] = {"apple","banana","apple","mango","banana"};
    int n = 5;

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(strcmp(arr[i],arr[j])==0)
                printf("Duplicate: %s\n", arr[i]);
        }
    }
    return 0;
}