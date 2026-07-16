#include <stdio.h>

int main(void)
{
    int number;
    int originalNumber;
    int reversed = 0;
    int remainder;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    originalNumber = number;
    if (number < 0) {
        number = -number;
        originalNumber = -originalNumber;
    }

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    if (reversed == (originalNumber < 0 ? -originalNumber : originalNumber)) {
        printf("%d is a palindrome number.\n", originalNumber);
    } else {
        printf("%d is not a palindrome number.\n", originalNumber);
    }

    return 0;
}
