#include <stdio.h>

int main(void)
{
    int item_number, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);


    printf("\nItem      ");
    printf("Unit      ");
    printf("Purchase  \n");

    printf("          ");
    printf("Price     ");
    printf("Date      \n");

    printf("%-10d", item_number);
    printf("%-10.2f", unit_price);
    printf("%d-%d-%d\n", year, month, day);

    return 0;
}