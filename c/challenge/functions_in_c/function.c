#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int answer = 0;

    if (a > answer)
        answer = a;
    if (b > answer)
        answer = b;
    if (c > answer)
        answer = c;
    if (d > answer)
        answer = d;

    return answer;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
