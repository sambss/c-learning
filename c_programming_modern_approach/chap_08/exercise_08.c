#include <stdio.h>

int main(void){

    float temperature_readings[12][30] = {
        {12.5, 12.5, 12.5},
        {30, 31, 29},
    };

    printf("%.1f\n", temperature_readings[1][2]);


    return 0;
}