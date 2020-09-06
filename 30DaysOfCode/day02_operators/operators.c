#include <stdio.h>
#include <math.h>

int main() {
    float mealCost, tipPercent, taxPercent, tip, tax, totalCost;

    scanf("%f", &mealCost);
    scanf("%f", &tipPercent);
    scanf("%f", &taxPercent);
    tip = mealCost * tipPercent/100;
    tax = mealCost * taxPercent/100;
    totalCost = mealCost + tip + tax;
    printf("%d", (int)round(totalCost));

    return 0;
}
