/* Finds the largest and smallest elements in an array */
#include <stdio.h>
#define N 10

void max_2nd_max(int a[], int n, int *max, int *sec_max);

int main(void)
{
    int b[N], i, big, sec_max;
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);
    
    max_2nd_max(b, N, &big, &sec_max);

    printf("Largest: %d\n", big);
    printf("Second Largest: %d\n", sec_max);
    
    return 0;
}
void max_2nd_max(int a[], int n, int *max, int *sec_max)
{
    int i;

    *max = *sec_max = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > *max){
            *sec_max = *max;
            *max = a[i];
        }
    }
}