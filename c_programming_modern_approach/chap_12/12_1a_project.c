#include <stdio.h>
#define MAX_CHAR 50

int main(void)
{
    char string[MAX_CHAR];
    int i = 0;

    printf("Digite sua mensagem: ");
    while(i < MAX_CHAR){
        scanf("%c", &string[i]);

        if (string[i] == '\n')
        {
            break;
            i++;
        }
        
        i++;
    }

    i--;

    printf("Reversal is: ");
    while(i >= 0){
        printf("%c", string[i]);
        i--;
    }

    printf("\n");
    return 0;
}