#include <stdio.h>

int num_digits(int n)
{
    int count;

    while(n > 0){
        count++;
        n = n / 10;
    }

    return count;

}

int main(void)
{
    int n, count;

    printf("Enter integer number: ");
    scanf("%d", &n);

    count = num_digits(n);

    printf("There are %d digit(s) in %d.\n", count, n);

}