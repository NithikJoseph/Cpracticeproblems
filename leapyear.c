#include<stdio.h>
int year;
int leap(){
  if (year%400==0){
    printf("The entered year %d is leap year",year);
  }
    else if(year%4==0){
    printf("The entered year %d is leap year",year);
  }
    else if (year%100==0){
    printf("The entered year %d is leap year",year);
    }
    else
    printf("The entered year %d is not leap year",year);
}
int main(){
  printf("enter the year:");
  scanf("%d",&year);
  leap(); 
}
