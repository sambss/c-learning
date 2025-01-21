#include <stdio.h>

int main(void)
{
    int input, o1, o2, o3, o4, o5;
    
    printf("Enter a integer number between 0 and 32767: ");
    scanf("%d", &input);

    o5 = input % 8;
    input = input / 8;

    o4 = input % 8;
    input = input / 8;
    
    o3 = input % 8;
    input = input / 8;

    o2 = input % 8;
    input = input / 8;

    o1 = input % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", o1, o2, o3, o4, o5);

    return 0;
}