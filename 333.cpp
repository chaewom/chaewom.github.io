#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Error: Cannot calculate factorial of a negative number.\n");
    else {
        unsigned long long result = factorial(num);
        printf("The factorial of %d is %llu\n", num, result);
    }

    return 0;
}

