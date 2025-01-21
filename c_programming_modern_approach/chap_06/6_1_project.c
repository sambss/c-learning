#include <stdio.h>

int main(void)
{
    float new_number, highest_number;

    highest_number = 0;
    
    for (; ;){
        printf("Enter a number: ");
        scanf("%f", &new_number);

        if (new_number > highest_number){
            highest_number = new_number;
        }
        if (new_number <= 0){
            break;
        }
    }

    printf("The highest number is: %f\n", highest_number);
    return 0;
}