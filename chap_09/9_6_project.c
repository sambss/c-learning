/* 3x5 + 2x4 – 5x3 – x2 + 7x – 6 */

#include <stdio.h>

long int power(int x, int factor)
{
    if(factor == 0){
        return 1;
    }

    long int result = x;
    
    for(int i = 1; i < factor; i++){
        result *= x;
    }
    
    return result;
}

long int calculate_polynomial(int x)
{
    long int polynomial;

    polynomial = (3 * power(x, 5)) + (2 * power(x, 4)) - (5 * power(x, 3)) - (1 * power(x, 2)) + (7 * x) - 6;

    return polynomial;
}

int main(void){

    int x;
    long int polynomial;

    printf("We'll calculate a polynomial using user input\n");
    
    printf("Input a number: ");
    scanf("%d", &x);

    polynomial = calculate_polynomial(x);

    printf("The result id %ld.\n", polynomial);

    return 0;
}