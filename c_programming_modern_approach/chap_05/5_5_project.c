#include <stdio.h>

int main(void)
{
    float income;

    printf("Enter income: ");
    scanf("%f", &income);

    if (income < 750){
        printf("Tax: $%.2f\n", 0.01 * income);

    } else if ((income >= 750) && (income < 2250)){
        printf("Tax: $%.2f\n", 7.5 + (0.02 *  (income - 750)));

    } else if ((income >= 2250) && (income < 3750)){
        printf("Tax: $%.2f\n", 37.5 + (0.03 * (income - 2250)));

    } else if ((income >= 3750) && (income < 5250)){
        printf("Tax: $%.2f\n", 82.5 + (0.04 * (income - 3750)));

    } else if ((income >= 5250) && (income < 7000)){
        printf("Tax: $%.2f\n", 142.5 + (0.05 * (income - 5250)));

    } else if (income >= 7000){
        printf("Tax: $%.2f\n", 230 + (0.06 * (income - 7000)));
    }

    return 0;
}