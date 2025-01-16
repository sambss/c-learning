#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int i, j;
    i = 5, j = 20;

    printf("Before change: i = %d and j = %d\n", i, j);

    swap(&i, &j);

    printf("After change: i = %d and j = %d\n", i, j);
}

void swap(int *p, int *q){
    int z;

    z = *p;

    *p = *q;
    *q = z;
}