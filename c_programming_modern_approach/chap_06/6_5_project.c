#include <stdio.h>

int main(void){

    int input_number;

    printf("Enter a number: ");
    scanf("%d", &input_number);
    printf("The reversal is: ");
    do{
        printf("%d", input_number % 10);
        input_number /= 10;
    }
    while(input_number > 0);

    printf("\n");
    

    return 0;
}