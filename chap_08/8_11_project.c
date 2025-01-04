#include <stdio.h>
#include <ctype.h>

int main(void){

    char array_message[15];
    int i = 1;

    printf("Enter the phone number: ");
    scanf("%c", &array_message[0]);

    while(i < 15){
        scanf("%c", &array_message[i]);
        i++;
        if(array_message[i - 1] == '\n'){
            break;
        }
    }

    printf("In numeric form: ");
    
    i = 0;
    
    while(i < 15 && array_message[i] != '\n'){

        if(array_message[i] == 'A' || array_message[i] == 'B' | array_message[i] == 'C'){
            printf("2");
        }
        else if(array_message[i] == 'D' || array_message[i] == 'E' | array_message[i] == 'F'){
            printf("3");
        }
        else if(array_message[i] == 'G' || array_message[i] == 'H' | array_message[i] == 'I'){
            printf("4");
        }
        else if(array_message[i] == 'J' || array_message[i] == 'K' | array_message[i] == 'L'){
            printf("5");
        }
        else if(array_message[i] == 'M' || array_message[i] == 'N' | array_message[i] == 'O'){
            printf("6");
        }
        else if(array_message[i] == 'P' || array_message[i] == 'R' | array_message[i] == 'S'){
            printf("7");
        }
        else if(array_message[i] == 'T' || array_message[i] == 'U' | array_message[i] == 'V'){
            printf("8");
        }
        else if(array_message[i] == 'W' || array_message[i] == 'X' | array_message[i] == 'Y'){
            printf("9");
        }
        else {
            printf("%c", array_message[i]);
        }
        i++;
    }

    printf("\n");
    return 0;
}