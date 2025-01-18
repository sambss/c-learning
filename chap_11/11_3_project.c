#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int m, n, remainder, gcd;
    int reduced_m, reduced_n;
    
    printf("Input the fraction: ");
    scanf("%d/%d", &m, &n);

    reduce(m, n, &reduced_m, &reduced_n);
    
    printf("In lowest terms: %d/%d\n", reduced_m, reduced_n);

    return 0;
}


void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int temp_n, gcd, remainder;
    
    temp_n = denominator, gcd = numerator;
    
    while(temp_n > 0){
        remainder = gcd % temp_n;
        gcd = temp_n;
        temp_n = remainder;
    }

    *reduced_numerator = numerator / gcd;
    *reduced_denominator = denominator / gcd;
}