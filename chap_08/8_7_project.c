#include <stdio.h>

int main(void){

    int array_values[3][3];
    int input;

    for(int i = 0; i < 3; i++){
        printf("Enter inputs from row %i:     ", i);
        scanf("%i %i %i", &array_values[i][0], &array_values[i][1], &array_values[i][2]);
    }

    printf("Row totals: ");
    for(int i = 0; i < 3; i++){
        printf("%i ", array_values[i][0] + array_values[i][1] + array_values[i][2]);
    }
    printf("\n");

    printf("Column totals: ");
    for(int i = 0; i < 3; i++){
        printf("%i ", array_values[0][i] + array_values[1][i] + array_values[2][i]);
    }
    printf("\n");

    return 0;
}