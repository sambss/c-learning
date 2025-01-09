#include <stdio.h>
#define N 4

int fact(int n)
{
    int factorial_element = 1;

    while(n > 1){
        factorial_element *= n;
        n--;
    }

    return factorial_element;
    
}


int main(void){

    int input = N;
    int output = fact(input);

    printf("%d\n", output);

    return 0;
}