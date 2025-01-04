#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand( (unsigned)time(NULL) );
    int direction = 0; /* 0 left | 1 right | 2 down | 3 up */
    int tries = 0;
    int rand_num;
    char space[10][10] = {{'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'},
                          {'.','.','.','.','.','.','.','.','.','.'}
    };
    
    int pos_i = 0, pos_j = 0;

    space[pos_i][pos_j] = 'A';

    for(int i = 1; i <= 25; i++){
        rand_num = rand();
        while(tries < 4){
            direction = rand_num % 4;
            // printf("%i\n", direction);

            if((direction == 0) & (pos_j - 1 >= 0) & (space[pos_i][pos_j - 1] == '.')){ /* left clause check */
                pos_j--;
                space[pos_i][pos_j] = 'A' + i;
                break;
            }
            else if((direction == 1) & (pos_j + 1 <= 9) & (space[pos_i][pos_j + 1] == '.')){ /* right clause check */
                pos_j++;
                space[pos_i][pos_j] = 'A' + i;
                break;
            }
            else if((direction == 2) & (pos_i + 1 <= 9) & (space[pos_i + 1][pos_j] == '.')){ /* down clause check */
                pos_i++;
                space[pos_i][pos_j] = 'A' + i;
                break;
            }
            else if((direction == 3) & (pos_i - 1 >= 0) & (space[pos_i - 1][pos_j] == '.')){ /* up clause check */
                pos_i--;
                space[pos_i][pos_j] = 'A' + i;
                break;
            }  

            tries++;
            rand_num++;
        }
        
        if(tries == 4){
            break;
        }
        else{
            tries = 0;
        }

    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%c", space[i][j]);
        }
        printf("\n");
    }

    return 0;
}