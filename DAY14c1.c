//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main(){
    int n,s;
    printf("enter a odd no.");
    scanf("%d",&n);
    s=0;
    for(int i=1 ; i <=n ; i+=2){
        s+=i;
    }
    printf("The sum of odd no.s till %d is %d",n,s);

    return 0;
}
