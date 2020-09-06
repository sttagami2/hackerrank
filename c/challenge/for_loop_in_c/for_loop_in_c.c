#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void greater_than_9(int n) {
    if (n % 2 == 0)
        printf("even");
    if (n % 2 != 0)
        printf("odd");
}

void print_number(int n) {
    if (n == 0)
        printf("zero");
    else if (n == 1)
        printf("one");
    else if (n == 2)
        printf("two");
    else if (n == 3)
        printf("three");
    else if (n == 4)
        printf("four");
    else if (n == 5)
        printf("five");
    else if (n == 6)
        printf("six");
    else if (n == 7)
        printf("seven");
    else if (n == 8)
        printf("eight");
    else if (n == 9)
        printf("nine");
    else
        greater_than_9(n);
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for (int i=a; i<=b; i++) {
        if (i < 0)
            printf("Error");
        else if (0 <= i)
            print_number(i);
        printf("\n");
    }

    return 0;
}


