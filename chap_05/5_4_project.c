#include <stdio.h>

int main(void)
{
    int wind_speed;

    printf("Enter the wind speed (in knots): ");
    scanf("%d", &wind_speed);

    if (wind_speed < 1){
        printf("Description: Calm\n");
    } else if ((wind_speed >= 1) && (wind_speed < 4)){
        printf("Description: Light air\n");
    } else if ((wind_speed >= 4) && (wind_speed < 28)){
        printf("Description: Breeze\n");
    } else if ((wind_speed >= 28) && (wind_speed < 48)){
        printf("Description: Gale\n");
    } else if ((wind_speed >= 48) && (wind_speed < 64)){
        printf("Description: Storm\n");
    } else if (wind_speed >= 64){
        printf("Description: Hurricane\n");
    }

    return 0;
}