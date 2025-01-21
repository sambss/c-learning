#include <stdio.h>
#include <ctype.h>

int main(void){

    char first_letter, array_message[20];
    char ch = '.';
    int i = 1;

    printf("Enter a first and a last name: ");
    scanf("%c", &first_letter);

    while(ch != ' '){
        scanf("%c", &ch);
    }

    scanf("%c", &array_message[0]);


    while(i < 20){
        scanf("%c", &array_message[i]);
        i++;
        if(array_message[i - 1] == '\n'){
            break;
        }
    }

    printf("You entered the name: ");
    for(int j = 0; j < i - 1; j++){
        printf("%c", array_message[j]);
    }

    printf(", %c.\n", toupper(first_letter));
    return 0;
}