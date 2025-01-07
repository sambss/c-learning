#include <stdio.h>

float compute_GPA(char grades[], int n)
{
    int sum = 0, i = 0;
    float avg;

    for(i = 0; i < n; i++){
        if(grades[i] == 'A')
            sum += 4;
        else if(grades[i] == 'B')
            sum += 3;
        else if(grades[i] == 'C')
            sum += 2;
        else if(grades[i] == 'D')
            sum += 1;
    }

    avg = sum / ((float) n);
    return avg;
}


int main(void)
{
    float avg;
    char grades[10] = {'A', 'B', 'B', 'C', 'C', 'D', 'F', 'F', 'A', 'A'};

    avg = compute_GPA(grades, sizeof(grades)/sizeof(grades[0]));
    printf("The avg gpa is: %.2f\n", avg);

    return 0;
}