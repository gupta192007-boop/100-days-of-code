//Write a program to check if a number is a strong number.
#include <stdio.h>
int main(){
    int n,d, sum=0, p=1;
    printf("enter no.");
    scanf("%d",&n);
    int t=n;
    while(n>0){
        d=n%10;
        p=1;
        for(int i=1;i<=d;i++){
            p*=i;
        }
        sum+=p;
        printf("\n %d ! is %d",d,p);
        n=n/10;
    }
    printf("%d",sum);
    if(sum==t){
        printf("\nno. is strong no.");
    }
    else{
        printf("\nno. is not strong no.");
    }
    return 0;

}