#include <stdio.h>


int get_max_value(int a[], int n)
{
    int i, max = a[0];

    for(i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    return max;
}

float get_avg_value(int a[], int n)
{
    int i, sum = 0;
    float avg;

    for(i = 0; i < n; i++){
        sum += a[i];
    }

    avg = sum / ((float) n);

    return avg;
}

int get_num_positives(int a[], int n)
{
    int i, num_positives = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] > 0){
            num_positives++;
        }
    }
    
    return num_positives;
}

int main(void)
{
    int array_a[10] = {0, -1, 2, 3, 4, -5, 6, 7, -8, 9};
    int max, num_positives;
    float avg;

    max = get_max_value(array_a, sizeof(array_a)/sizeof(array_a[0]));
    printf("Max value from array is: %d\n", max);

    avg = get_avg_value(array_a, sizeof(array_a)/sizeof(array_a[0]));
    printf("Avg value from array is: %.3f\n", avg);

    num_positives = get_num_positives(array_a, sizeof(array_a)/sizeof(array_a[0]));
    printf("Max value from array is: %d\n", num_positives);

    return 0;
}