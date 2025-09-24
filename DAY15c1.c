// Write a program to calculate the factorial of a number.
#include <stdio.h>
int main(){
    int n,p;
    printf("Enter no.");
    scanf("%d",&n);
    p=1;
    for( int i=1; i<=n; i++){
        p*=i;

    }
    printf("Factorial of %d is %d",n,p);
    return 0;
}