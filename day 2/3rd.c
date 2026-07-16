#include <stdio.h>

int main(void)
{
    int number;
    int product = 1;
    int remainder;
    int hasNonZeroDigit = 0;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (number == 0) {
        product = 0;
    } else {
        if (number < 0) {
            number = -number;
        }
        while (number > 0) {
            remainder = number % 10;
            if (remainder != 0) {
                product *= remainder;
                hasNonZeroDigit = 1;
            }
            number /= 10;
        }
        if (!hasNonZeroDigit) {
            product = 0;
        }
    }

    printf("Product of digits = %d\n", product);
    return 0;
}
