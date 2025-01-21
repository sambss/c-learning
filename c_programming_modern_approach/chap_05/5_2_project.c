#include <stdio.h>

int main(void)
{
    int input_hour, input_minute;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &input_hour, &input_minute);

    if (input_hour == 0){
        printf("It's 12:%d AM.\n", input_minute);
    } else if ((input_hour > 0) && (input_hour < 12)){
        printf("It's %d:%d AM.\n", input_hour, input_minute);
    } else if (input_hour == 12){
        printf("It's 12:%d PM.\n", input_minute);
    } else if ((input_hour > 12) && (input_hour < 24)){
        printf("It's %d:%d PM.\n", input_hour - 12, input_minute);
    }
    
    return 0;
}