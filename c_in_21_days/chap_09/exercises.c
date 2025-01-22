#include <stdio.h>

#define N 3

int sumarrays(int a1[], int a2[], int size);

void addarrays(int a1[], int a2[], int size);

int main(void)
{
    char *char_ptr;

    int cost, *p_cost;
    p_cost = &cost;

    cost = 100;
    *p_cost = 100;

    printf("%d\t%p\n", cost, &cost);
    printf("%d\t%p\n", *p_cost, p_cost);

    float radius, *p_radius;
    radius = 3.14;
    p_radius = &radius;

    int data[5];
    data[2] = 100;
    *(data + 2) = 100;
    printf("%d\n", data[2]);

    int a1[N] = {1, 2, 3};
    int a2[N] = {4, 5, 6};
    int result = sumarrays(a1, a2, N);
    printf("Array sum: %d\n", result);

    int a3[N], count = 0, *a3_ptr;
    addarrays(a1, a2, N);

}

int sumarrays(int a1[], int a2[], int size)
{
    int count, sum = 0;

    for(count = 0; count < size; count++){
        sum += *(a1 + count) + *(a2 + count);
    }

    return sum;
}

void addarrays(int a1[], int a2[], int size)
{
    int a3[size];
    int count;

    for(count = 0; count < size; count++){
        a3[count] = *(a1 + count) + *(a2 + count);
        printf("a3[%d]: %d\n", count, a3[count]);
    }
}