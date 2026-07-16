#include <stdio.h>

int main(void)
{
    int number;
    int reversed = 0;
    int remainder;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number = %d\n", reversed);
    return 0;
}
