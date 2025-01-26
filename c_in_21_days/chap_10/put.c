/* Demonstrates displaying strings with puts(). */
#include <stdio.h>

int main( void )
{

    char *message1 = "C";
    char *message2 = "is the";
    char *message3 = "best";
    char *message4 = "programming";
    char *message5 = "language!!";
    char *strong = "Better, Faster, Harder, Stronger!";
    char *string = "We can also print it using printf\n";

    puts(message1);
    puts(message2);
    puts(message3);
    puts(message4);
    puts(message5);
    puts(strong);
    printf("%s", string);

    return 0;
}