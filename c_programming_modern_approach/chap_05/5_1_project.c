#include <stdio.h>

int main(void)
{
    int input_num;

    printf("Input a number between 0 and 9999: ");
    scanf("%d", &input_num);

    if (input_num < 10){
        printf("The number has 1 single digit.\n");
    }
    else if ((input_num >= 10) && (input_num < 100)){
        printf("The number has 2 digits.\n");
    }
    else if ((input_num >= 100) && (input_num < 1000)){
        printf("The number has 3 digits.\n");
    }
    else if ((input_num >= 1000) && (input_num < 10000)){
        printf("The number has 4 digits.\n");
    }
    
    return 0;
}