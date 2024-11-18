/* Computes a Universal Product Code check digit */
#include <stdio.h>
int main(void)
{
    int input, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
    int sum_1, sum_2, check_digit;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    sum_1 = (i2 + i4 + i6 + i8 + i10 + i12) * 3;
    sum_2 = (i1 + i3 + i5 + i7 + i9 + i11);

    check_digit =  9 - (((sum_1 + sum_2) - 1) % 10);

    printf("Calculated check digit is: %d\n", check_digit);

    return 0;
}