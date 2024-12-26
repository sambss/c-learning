/* It also solves exercise 04 */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool weekend[] = {[0] = true, [6] = true};

    printf("size of weekend: %d\n", (int) (sizeof(weekend) / sizeof(weekend[0])));
    
    printf("first: %d\n", weekend[0]);
    printf("second: %d\n", weekend[1]);
    printf("third: %d\n", weekend[2]);
    printf("last: %d\n", weekend[6]);

    return 0;
}