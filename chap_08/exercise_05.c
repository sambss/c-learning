#include <stdio.h>
#define ARRAY_LEN 32

int main(void){

    unsigned long fibo[ARRAY_LEN];
    int i;

    fibo[0] = 0, fibo[1] = 1;
    printf("%lu %lu ", fibo[0], fibo[1]);

    for(i = 2; i <= ARRAY_LEN; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
        printf("%lu\n", fibo[i]);
    }

    return 0;
}