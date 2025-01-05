/* Greatest common divisor */
#include <stdio.h>

int gcd(int m, int n)
{
    int remainder;

    while(n > 0){
        remainder = m % n;
        m = n;
        n = remainder;
    }

    return m;
}

int main(void)
{
    int m, n;
    printf("Enter two numbers numbers: ");
    scanf("%i%i", &m, &n);

    m = gcd(m, n);

    printf("Greatest common divisor: %d\n", m);
    
    return 0;
}