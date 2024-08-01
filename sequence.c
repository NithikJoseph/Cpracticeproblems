/*Generate a sequence of numbers such that every number in the sequence is the sum of the previous
three numbers. The first three numbers are 0,0,1.*/
#include <stdio.h>
int n, a = 0, b = 0, c = 1;
int seq(){for (int i = 3; i < n; i++) {
        int sum = a + b + c;
        printf(" %d", sum);
        a = b;
        b = c;
        c = sum;
    }
}
int main() {
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Sequence: 0 0 1");
    seq();
}
