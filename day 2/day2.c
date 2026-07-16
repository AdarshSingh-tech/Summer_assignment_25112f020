#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
