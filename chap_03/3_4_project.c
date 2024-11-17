#include <stdio.h>

int main(void)
{
    int phone_1, phone_2, phone_3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d", &phone_1, &phone_2, &phone_3);

    printf("You entered: %d.%d.%d\n", phone_1, phone_2, phone_3);
    return 0;
}