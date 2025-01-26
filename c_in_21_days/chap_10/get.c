/* Demonstrates using the gets() library function. */
#include <stdio.h>
/* Allocate a character array to hold input. */

int main( void )
{
    char input[257];
    
    puts("Enter some text, then press Enter: ");
    //gets(input);
    fgets(input, 257, stdin); /* 'gets' is unsafe. New scripts should use fgets */

    printf("You entered: %s", input);
    return 0;
}