#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int first, second, third, fourth, fifth;
    int n;
    scanf("%d", &n);
    fifth = n % 10;
    n = n / 10;
    fourth = n % 10;
    n = n / 10;
    third = n % 10;
    n = n / 10;
    second = n % 10;
    n = n / 10;
    first = n % 10;
    printf("%d", first + second + third + fourth + fifth);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
