#include <stdio.h>
int main() 
{
    int amount, n500, n100, n50, n20, n10, n5, n2, n1;
    
    printf("Enter an amount: ");
    scanf("%d", &amount);
    
    n500 = amount / 500;
    amount = amount % 500;
    n100 = amount / 100;
    amount = amount % 100;
    n50 = amount / 50;
    amount = amount % 50;
    n20 = amount / 20;
    amount = amount % 20;
    n10 = amount / 10;
    amount = amount % 10;
    n5 = amount / 5;
    amount = amount % 5;
    n2 = amount / 2;
    amount = amount % 2;
    n1 = amount;
    
    printf("Minimum number of notes required:\n");
    printf("Rs. 500: %d\n", n500);
    printf("Rs. 100: %d\n", n100);
    printf("Rs. 50: %d\n", n50);
    printf("Rs. 20: %d\n", n20);
    printf("Rs. 10: %d\n", n10);
    printf("Rs. 5: %d\n", n5);
    printf("Rs. 2: %d\n", n2);
    printf("Rs. 1: %d\n", n1);
    
    return 0;
}
