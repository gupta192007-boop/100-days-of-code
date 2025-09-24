//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main(){
    int a,b,hcf,lcm;
    printf("enter two no.");
    scanf("%d %d",&a,&b);
    int min;
    if(a<b){
        min=a;
    }
    else{
        min=b;
    }
    for(int i=1; i<=min ; i++){
        if(a%i==0 && b%i==0){
            hcf=i;// gcd stored
        }
    }
    lcm=a*b/hcf;
    printf("LCM is %d",lcm);
return 0;
}