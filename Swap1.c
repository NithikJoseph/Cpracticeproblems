#include<stdio.h>
int a,b,temp=0;
int swap1(){
temp=a;
a=b;
b=temp;
printf("The two numbers after swapped is:%d,%d",a,b);
}
int main(){
printf("Enter the two numbers to be swapped:");
scanf("%d%d",&a,&b);
swap1();
}
