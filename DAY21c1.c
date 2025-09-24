//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main(){
    int n,a,b,co=10;
    printf("enter a no.");
    scanf("%d",&n);
    while(n/co > 9){
        co*=10;
    }
    a=n/co;
    n=n%co;
    b=n%10;
    n=n/10;
    n=n*10+a;
    n=n+co*b;
    printf("%d",n);
return 0;
}
