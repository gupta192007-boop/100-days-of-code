//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main(){
    int a, sum=0;
    printf("enter a no.");
    scanf("%d",&a);
    printf("factors are");
    for(int i=1;i<a; i++){
        if(a % i==0){
            printf(" %d",i);
            sum+=i;
        }
              }
    printf("\nsum of the factors is %d",sum);
    if(sum==a && a!=0){
        printf("\nYes,It is perfect no.");
    }
    else{
        printf("Not a perfect no.");
    }
}