//Check if entered number is even or odd
#include<stdio.h>
int num;
int oddeven()
    {
        if (num%2==0)//if remainder=0 then it is divisble by 2 which implies number is even.
            printf("The entered number %d is even.",num);
        else
            printf("The entered number %d is odd.",num);
    }

int main()//main function
    {   printf("Enter the number:");
        scanf("%d",&num);
        oddeven();//function call
    }
