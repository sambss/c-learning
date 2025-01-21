#include <stdio.h>

int main(void)
{
    int number_of_days, week_day;

    printf("Enter the number of days: ");
    scanf("%d", &number_of_days);

    printf("Enter the day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &week_day);

    for (int i = 1; i <= week_day - 1; ++i){
        printf("   ");
    }

    for (int i = 1; i < number_of_days; i++, week_day++) {
        printf("%3d", i);

        if (week_day % 7 == 0){
            printf("\n");
            week_day = 0;
        }
    }
    
    printf("\n");

    return 0;
}