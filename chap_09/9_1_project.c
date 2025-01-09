#include <stdio.h>
#define N 7

void selection_sort(int a[], int max_pos);

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    selection_sort(a, N - 1);

    printf("Sorted order: ");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");


    return 0;
}

void selection_sort(int a[], int max_pos){
    int i, max_i = 0, max_value = a[max_i];

    if (max_pos == 0)
        return;
    
    for(i = 1; i <= max_pos; i++){
        if(a[i] > max_value){
            max_i = i;
            max_value = a[i];
        }
    }

    a[max_i] = a[max_pos];
    a[max_pos] = max_value;
    
    selection_sort(a, max_pos - 1);

}