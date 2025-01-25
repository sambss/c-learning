#include <stdio.h>
#define MAX_CHAR 50

int main(void)
{
    char string[MAX_CHAR];
    char *ptr;
    

    printf("Digite sua mensagem: ");

    for(ptr = string; ptr < string + MAX_CHAR; ptr++)
    {
        scanf("%c", ptr);
        
        if(*ptr == '\n')
        {
            ptr--;
            break;
        }
    }

    printf("Reversal is: ");
    
    for(ptr; ptr >= string; ptr--)
    {
        printf("%c", *ptr);
    }

    printf("\n");
    return 0;
}