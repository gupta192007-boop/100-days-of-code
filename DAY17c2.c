//Write a program to check if a number is prime.
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter no.");
    scanf("%d",&n);
    if(n<2){
        printf("not prime");
    }
    if(n>=2){
        for(int i=2; i<=sqrt(n); i++){
            if(n % i==0){
                printf("not prime");
            break;}
            
            else{
                printf("prime no.");
            }
        }
    }
    return 0;
}