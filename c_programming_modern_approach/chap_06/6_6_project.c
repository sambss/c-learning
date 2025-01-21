#include <stdio.h>

int main(void)
{
    int input_number;

    printf("Input number: ");
    scanf("%d", &input_number);

    for (int counter = 2; (counter * counter) < input_number; counter += 2){
        printf("%d\n", (counter * counter));
    }

    printf("%d\n", input_number);
    return 0;
}