#include <stdio.h>

int main(void)
{
    float x = 95.432;

    printf("%-8.1e\n", x);
    printf("%18.6e\n", x);
    printf("%.3f\n", x);
    printf("%8.0f\n", x);
    return 0;
}