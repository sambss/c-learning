/* Demonstrates the relationship between addresses and */
/* elements of arrays of different data types. */
#include <stdio.h>

int main(void)
{

    /* Declare a counter and three arrays */
    int ctr;

    short array_s[10];
    float array_f[10];
    double array_d[10];

    /* Print the table heading */
    printf("\t\tShort\t\tFloat\t\tDouble");
    printf("\n================================");
    printf("========================");

    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("\nElement %d:\t%p\t\t%p\t\t%p\n", ctr, &array_s[ctr], &array_f[ctr], &array_d[ctr]);
    }

    printf("\n================================");
    printf("========================\n");

    return 0;
}