//Write a program to check if a number is a palindrome
#include <stdio.h>

int main() {
    int n, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;  // keep original for display

    while (n > 0) {
        digit = n % 10;          // get last digit
        rev = rev * 10 + digit;  // build reverse
        n = n / 10;              // remove last digit
    }

    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", rev);

    if(original==rev){
        printf("%d is a palindrome.",original);
    }
    else{
        printf("%d is not a palindrome.",original);
    }
    return 0;
}
