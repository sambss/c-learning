#include <stdio.h>

int sum_array(int a[], int n)
{
    int sum = 0;
    int *p;
    
    for (p = a; p < a + n; p++){
        sum += *p;
    }
    return sum;
}

int main(void)
{
    int sum;
    int a[5] = {1, 2, 3, 4, 5};

    sum = sum_array(a, 5);

    printf("Sum value is: %d\n", sum);

    return 0;
}