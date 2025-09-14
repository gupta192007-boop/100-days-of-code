// Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
int main(){
    int day;
    printf("Enter no. from 1-12");
    scanf("%d",&day);
 switch(day){
    case 1:printf("Month is January and no. of days is 31");
    break;
    case 2:printf("Month is February and no. of days is 28/29");
    break;
    case 3:printf("Month is March and no. of days is 31");
    break;
    case 4:printf("Month is April and no. of days is 30");
    break;
    case 5:printf("Month is May and no. of days is 31");
    break;
    case 6:printf("Month is June and no. of days is 30");
    break;
    case 7:printf("Month is July and no. of days is 31");
    break;
    case 8:printf("Month is August and no. of days is 31");
    break;
    case 9:printf("Month is September and no. of days is 30");
    break;
    case 10:printf("Month is October and no. of days is 31");
    break;
    case 11:printf("Month is November and no. of days is 30");
    break;
    case 12:printf("Month is December and no. of days is 31");
    break;
    default:printf("Invalid");
    break;
    

    }
    return 0;
}
