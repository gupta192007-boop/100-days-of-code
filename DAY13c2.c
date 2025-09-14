//Write a program to print numbers from 1 to n.

#include <stdio.h>
int main(){
    int a;
    printf("Enter a no.");
    scanf("%d",&a);
    printf("No. from 1 to %d are:\n",a);
    for(int i =1 ; i<=a ; i++){
        printf(" %d \n",i);
    }
    return 0;
}