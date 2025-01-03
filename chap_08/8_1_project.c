#include <stdbool.h>
#include <stdio.h> 

int main(void)
{
    bool digit_seen[10] = {false};
    bool repeated_value[10] = {false};
    bool has_repeated = false;
    int digit;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]){
            repeated_value[digit] = true;
            has_repeated = true;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    if (has_repeated){
        printf("Repeated digit (s): ");
        for(int i = 0; i < 10; i++){
            if(repeated_value[i]){
                printf("%i ", i);
            }
        }
        printf("\n");
    }
    else {
        printf("No repeated digit\n");
    }
    
    return 0;
}