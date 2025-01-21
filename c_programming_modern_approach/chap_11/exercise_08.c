#include <stdio.h>
#define N 10

int *find_largest(int a[], int n);

int main(void)
{
    int b[N], i;
    int *p;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);
    
    p = find_largest(b, N);
    printf("The address memmory of the highest element: %p\n", p);
    printf("The the highest element: %d\n", *p);
    
    return 0;
}


int *find_largest(int a[], int n)
{
    int i;
    int *max;

    max = &a[0];

    printf("The address memmory of the first element: %p\n", max);

    for(i = 1; i < n; i++){
        if(a[i] > *max){
            max = &a[i];
        }
    }

    return max;
}