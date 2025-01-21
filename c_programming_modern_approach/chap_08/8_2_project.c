#include <stdbool.h>
#include <stdio.h> 

int main(void)
{
    int frequency[10] = {0};
    int digit;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        frequency[digit]++;
        n /= 10;
    }

    printf("Digit: %6i ", 0);
    for(int i = 1; i <= 9; i++){
        printf("%i ", i);
    }

    printf("\nOcurrences: %i ", 0);
    for(int i = 1; i <= 9; i++){
        printf("%i ", frequency[i]);
    }
    printf("\n");
    
    return 0;
}