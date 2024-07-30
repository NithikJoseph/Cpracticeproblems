#include<stdio.h>
int a,b;
int swap2(){
a=a+b;
b=a-b;
a=a-b;
printf("The two numbers after swapped is:%d,%d",a,b);
}
int main(){
printf("Enter the two numbers to be swapped:");
scanf("%d%d",&a,&b);
swap2();
}
