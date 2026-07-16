#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    int i;
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0) return 0;
    for (i = 3; i <= (int)sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void)
{
    int start, end;
    int i;

    printf("Enter the starting number: ");
    if (scanf("%d", &start) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter the ending number: ");
    if (scanf("%d", &end) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (start > end) {
        printf("Start should be less than or equal to end.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d:\n", start, end);
    for (i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
