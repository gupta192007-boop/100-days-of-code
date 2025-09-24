//Write a program to check if a number is prime.
#include <stdio.h>
#include <math.h>

int main() {
    int n, isPrime = 1;   // assume prime at start
    printf("Enter no: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("not prime\n");
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;  // found a divisor → not prime
                break;
            }
        }

        if (isPrime)
            printf("prime no.\n");
        else
            printf("not prime\n");
    }

    return 0;
}
