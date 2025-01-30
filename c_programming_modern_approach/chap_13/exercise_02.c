#include <stdio.h>

int main(void)
{
    char *p = "abc";

    putchar(*p);
    printf("\n");
    puts(p);

    return 0;
}