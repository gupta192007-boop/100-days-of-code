//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main(){
    int n,p;
    printf("enter a even no.");
    scanf("%d",&n);
    p=1;
    for(int i=2 ; i <=n ; i+=2){
        p*=i;
    }
    printf("The product of even no.s till %d is %d",n,p);

    return 0;
}
