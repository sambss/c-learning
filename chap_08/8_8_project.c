#include <stdio.h>

int main(void){

    float array_values[3][3];
    int input;
    int max_pos, min_pos;

    for(int i = 0; i < 3; i++){
        printf("Enter inputs from Student n°%i:     ", i + 1);
        scanf("%f %f %f", &array_values[i][0], &array_values[i][1], &array_values[i][2]);
    }

    printf("\n");

    printf("Total Score for Student: ");
    for(int i = 0; i < 3; i++){
        printf("%.2f ", array_values[i][0] + array_values[i][1] + array_values[i][2]);
    }
    printf("\n");

    printf("Average Score for Student: ");
    for(int i = 0; i < 3; i++){
        printf("%.2f ", (array_values[i][0] + array_values[i][1] + array_values[i][2]) / 3.0);
    }
    printf("\n\n");

    printf("Stats by Quiz: \n");
    for(int j = 0; j < 3; j++){
        printf("\t Stats Quiz %i: ", j + 1);
        printf("\t\t Average Score: %.2f ", (array_values[0][j] + array_values[1][j] + array_values[2][j]) / 3);

        max_pos = 0;
        min_pos = 0;

        /* First compares row 0 and row 1 */
        if(array_values[0][j] > array_values[1][j]){
            min_pos = 1;
        }
        else{
            max_pos = 1;
        }

        /* Compares row max_pos and row 2*/
        if(array_values[2][j] > array_values[max_pos][j]){
            max_pos = 2;
        }

        /* Compares row min_pos and row 2*/
        if(array_values[2][j] < array_values[min_pos][j]){
            min_pos = 2;
        }

        printf("\t\t Max Score: %.2f", array_values[max_pos][j]);
        printf("\t\t Min Score: %.2f\n", array_values[min_pos][j]);
    }
    printf("\n");

    return 0;
}