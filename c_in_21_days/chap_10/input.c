/* Demonstrates using scanf() to input numeric and text data. */
#include <stdio.h>


int main( void )
{
    char lname[257], fname[257];
    int count, id_num;

    /* Prompt the user. */
    puts("Enter last name, first name, ID number separated");
    puts("by spaces, then press Enter.");

    /* Input the three data items. */
    count = scanf("%s%s%d", lname, fname, &id_num);

    /* Display the data. */
    printf("%d items entered: %s %s %d \n", count, fname, lname, id_num);
    return 0;
}