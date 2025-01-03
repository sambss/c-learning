#include <stdio.h>
#include <ctype.h>

int main(void){

    char array_message[512]; /* That's the max number of chars supported by this script */
    char ch;
    int i = 1;

    printf("Enter your message: ");

    array_message[0] = toupper(getchar());

    while(array_message[i - 1] != '\n'){
        array_message[i] = toupper(getchar());
        i++;
    }

    if(i == 1){
        printf("There is no message.\n");
        return 0;
    }

    printf("In B1FF-speak: ");

    i = 0;
    while(array_message[i] != '\n'){
        if(array_message[i] == 'A'){
            printf("4");
        }
        else if(array_message[i] == 'B'){
            printf("8");
        }
        else if(array_message[i] == 'E'){
            printf("3");
        }
        else if(array_message[i] == 'I'){
            printf("1");
        }
        else if(array_message[i] == 'O'){
            printf("0");
        }
        else if(array_message[i] == 'S'){
            printf("5");
        }
        else{
            printf("%c", array_message[i]);
        }
        i++;
    }
    printf("!!!!!!!!!!\n");

    return 0;
}