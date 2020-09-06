#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Declare second integer, double, and String variables.
    int int_num = 4;
    double double_num = 4.0;
    char str[] = "HackerRank ";

    // Read and save an integer, double, and String to your variables.
    int i;
    double d;
    char s[100];

    scanf("%d", &i);
    scanf("%lf", &d);
    scanf("%*[\n] %[^\n]", s);
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n", int_num + i);

    // Print the sum of the double variables on a new line.
    printf("%0.1lf\n", double_num + d);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s\n", str, s);

    return 0;
}
