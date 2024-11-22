#include <stdio.h>

int main(void)
{
    int i, j;

    i = 5, j = 5;
    
    printf("%d\n", (i == j) - (i < j));

    return 0;
}