//Write a program to find the product of odd digits of a number.
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n,p=1,d; bool odd=false;
    printf("enter a no.");
    scanf("%d",&n);
    while(n>0){
       d=n%10;
       if(d%2!=0){
        p*=d;
        odd=true;
       }
       n=n/10;
    }
    if(odd){
        printf("The product of odd digits is %d",p);
    }
    else{
        printf("no odd digits found");
    }
    return 0;
}