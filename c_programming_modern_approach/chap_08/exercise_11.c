#include <stdio.h>

int main(void){

    char checker_board[8][8];

    for(int i = 0; i <= 7; i++){
        for(int j = 0; j <= 7; j++){
            if((i + j) % 2 == 0){
                checker_board[i][j] = 'B';
            }
            else{
                checker_board[i][j] = 'W';
            }
        }
    }

    printf("C2: %c\n", checker_board[1][2]);
    printf("H4: %c\n", checker_board[3][7]);

    return 0;
}