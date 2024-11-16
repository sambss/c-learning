#include <stdio.h>

int main(void)
{
    int month, day, year;
    printf("Insert date in the mm/dd/yyyy format: ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("The date is: %d-%d-%d\n", year, month, day);
    return 0;
}