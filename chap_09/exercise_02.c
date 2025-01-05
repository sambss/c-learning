/* Returns 1 if both x and y fall between 0 and n – 1. It returns 0 otherwise. */
#include <stdio.h>

int check(int x, int y, int n)
{
    if(n >= 0){
        if((x <= n-1 && x >= 0) && (y <= n-1 && y >= 0)){
            return 1;
        }
    }
    else{
        if((x >= n-1 && x <= 0) && (y >= n-1 && y <= 0)){
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    int x, y, z, result;
    printf("Enter three numbers: ");
    scanf("%i%i%i", &x, &y, &z);

    result = check(x, y, z);

    printf("Result: %i\n", result);
    
    return 0;
}