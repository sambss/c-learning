#include <stdio.h>
#define TAX (1.05f)

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: R$ %.2f\n", amount * TAX);

    return 0;
}