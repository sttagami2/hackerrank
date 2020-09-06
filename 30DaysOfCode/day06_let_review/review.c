#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[10000];
    int t, i, j;

    scanf("%d", &t);
    for (i=0; i<t; i++) {
        scanf("%s", s);
        for (j=0; j<strlen(s); j+=2) {
            printf("%c", s[j]);
        }
        printf(" ");
        for (j=1; j<strlen(s); j+=2) {
            printf("%c", s[j]);
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

