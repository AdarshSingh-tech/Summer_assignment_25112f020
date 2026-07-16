#include <stdio.h>
#include <math.h>

int main(void)
{
    int number;
    int i;
    int isPrime = 1;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (number <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= (int)sqrt(number); i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
