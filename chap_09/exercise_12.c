#include <stdio.h>

double inner_product(int n, double a[n], double b[n])
{
    double sum = 0;
    int i;

    for(i = 0; i < n; i++){
        sum += a[i] * b[i];
    }

    return sum;

}

int main(void)
{
    double sum;
    double a[10] = {1, 2, 3, 4, 5 ,6 ,7 ,8 ,9, 10};
    double b[10] = {1, 2, -3, 4, -5 ,6 ,7 ,-8 ,9, 10};

    sum = inner_product(10, a, b);
    printf("The inner product sum value is: %.3f\n", sum);

    return 0;
}