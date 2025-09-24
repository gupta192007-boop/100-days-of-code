//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main(){
    int n,d, sum=0;
    printf("enter a no.");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        sum+=d;
        n=n/10;
    }
    printf("The sum of the digits is %d",sum);
    return 0;

    }

