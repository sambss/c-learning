#include <stdio.h>

void pay_dollars(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int amount, twenties, tens, fives, ones;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    pay_dollars(amount, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);
    
    return 0;
}

void pay_dollars(int dollars, int *twenties, int *tens, int *fives, int *ones)
{

    *twenties = dollars / 20;

    dollars = dollars - (20 * *twenties);

    *tens = dollars / 10;

    dollars = dollars - (10 * *tens);

    *fives = dollars / 5;

    dollars = dollars - (5 * *fives);

    *ones = dollars / 1;

}