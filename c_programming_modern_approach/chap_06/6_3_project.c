#include <stdio.h>

int main(void)
{
    int m, n, remainder, gcd, temp_n;
    
    printf("Input the fraction: ");
    scanf("%d/%d", &m, &n);

    temp_n = n, gcd = m;
    
    while(temp_n > 0){
        remainder = gcd % temp_n;
        gcd = temp_n;
        temp_n = remainder;
    }
    
    printf("In lowest terms: %d/%d\n", m / gcd, n / gcd);

    return 0;
}