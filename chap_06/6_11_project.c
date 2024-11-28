#include <stdio.h>

int main(void)
{
    int input_number;
    float output_number, factorial_element;

    output_number = 1.0;
    factorial_element = 1.0;

    printf("Input a number: ");
    scanf("%d", &input_number);

    for(int i = 2; i <= input_number; i++){

        for(int j = i; j > 1; j--){
            factorial_element *= j;
        }
        
        output_number +=  1.0 / factorial_element;

        factorial_element = 1.0;
        
    }

    printf("e = %.6f\n", output_number);

    return 0;
}