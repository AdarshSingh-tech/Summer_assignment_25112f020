#include <stdio.h>

int main(void)
{
    int number;
    unsigned long long factorial = 1;
    int i;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    for (i = 1; i <= number; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %llu\n", number, factorial);
    return 0;
}

