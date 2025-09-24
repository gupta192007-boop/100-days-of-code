//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>
int main() {
    int n, count = 0,ams=0,digits;

    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;

    // Special case for 0
    if (n == 0) {
        count = 1;
    } else {
        int t=n;
        while (t > 0) {
            t= t / 10;  // remove last digit
            count++;
        }
    }
    int t=n;
    while(t>0){
        digits=t%10;
        ams=ams+(pow(digits,count));
        t=t/10;
    }
    if(original==ams){
        printf("%d is an amstrong no.",original);
    }
    else{
        printf("%d is not an amstrong no.",original);
    }
    return 0;
}



