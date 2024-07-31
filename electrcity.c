#include<stdio.h>
int units,price;
int bill(){
  if(units<=200){
    price=units*5;
  }
else(units<=300){
price=200*5+(7*(units-200));
  }
else{
price=200*5+7*100+(10*(units-300));
}
int main(){
  printf("Enter the total number of units used:");
  scanf("%d",&units);
  bill();
  printf("The total cost for %d units is ₹%d",units,price");
}
