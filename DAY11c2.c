//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main(){
    int sp,cp,p,l;
    printf("Enter selling price");
    scanf("%d",&sp);
    printf("Enter cost price");
    scanf("%d",&cp);
    p=((sp-cp)*100)/cp;
    l=((cp-sp)*100)/cp;
    if(sp>cp){
        printf("Profit percentage is %d%%",p);}
    else{
        printf("Loss percentage is %d%%",l);

    }

    }



