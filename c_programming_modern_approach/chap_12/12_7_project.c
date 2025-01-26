/* Finds the largest and smallest elements in an array */
#include <stdio.h>
#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
    int b[N], i, big, small;
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);
    
    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);
    
    return 0;
}
void max_min(int *ptr, int n, int *max, int *min)
{
    int i;

    *max = *min = *ptr;

    for (i = 1; i < n; i++) {
        if (*(ptr + i) > *max)
            *max = *(ptr + i);
        else if (*(ptr + i) < *min)
            *min = *(ptr + i);
    }
}