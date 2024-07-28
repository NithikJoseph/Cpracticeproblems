#include<stdio.h>
int num;
int oddeven()
    {
        if (num%2==0)
            printf("the number is even");
        else
            printf("the number is odd");
    }

int main()
    {   printf("Enter the number");
        scanf("%d",&num);
        oddeven();
    }
