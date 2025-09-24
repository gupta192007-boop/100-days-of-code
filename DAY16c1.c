//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main(){
    int n, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;

    // Handle case when number is 0
    if (n == 0) {
        printf("Binary of %d = 0\n", original);
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;  // store remainder
        n = n / 2;          // reduce number
        i++;
    }

    printf("Binary of %d = ", original);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);  // print in reverse
    }
    printf("\n");

    return 0;
}
