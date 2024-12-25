#include <stdio.h>
#include <ctype.h>

int main(void){

    char ch;
    int n;

    n = 0;

    printf("Enter the SCRABBLE word: ");
    ch = toupper(getchar());

    while(ch != '\n'){

        if(ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'L' ||ch == 'N' ||ch == 'O' ||ch == 'R' ||ch == 'S' ||ch == 'T' || ch == 'U'){
            n += 1;
        }
        else if(ch == 'D' || ch == 'G'){
            n += 2;
        }
        else if(ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P'){
            n += 3;
        }
        else if(ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y'){
            n += 4;
        }
        else if(ch == 'K'){
            n += 5;
        }
        else if(ch == 'J' || ch == 'X'){
            n += 8;
        }
        else if(ch == 'Q' || ch == 'Z'){
            n += 10;
        }
        else {
            n += 0;
        }
        
        ch = toupper(getchar());

    }

    printf("The sum is: %d\n", n);
    return 0;
}