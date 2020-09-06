#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    // Declare second integer, double, and String variables.

    // Read and save an integer, double, and String to your variables.
    int int_num;
    double double_num;
    char str[100];

    scanf("%d", &int_num);
    scanf("%lf", &double_num);
	gets_s(str, sizeof str);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + int_num);

    // Print the sum of the double variables on a new line.
    printf("%0.1lf\n", d + double_num);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s\n", s, str);

    return 0;
}
