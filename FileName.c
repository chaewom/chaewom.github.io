#include <stdio.h>
#include <math.h>

double calculate_log(double number, double base) {
    return log(number) / log(base);
}

int main() {
    double number, base, result;

    // Get user input
    printf("Enter a number: ");
    scanf("%lf", &number);
    printf("Enter the base: ");
    scanf("%lf", &base);

    // Calculate and display the result
    result = calculate_log(number, base);
    printf("The logarithm of %.2lf with base %.2lf is: %.2lf\n", number, base, result);

    return 0;
}