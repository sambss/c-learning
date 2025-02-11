#include <stdio.h>

void substring(char source[], int start, int count, char result[]);

int main(void)
{
    int start = 5;
    int count = 10;
    
    char string[] = "Some String To Extract Data";
    char result[100];

    
    substring(string, start, count, result);
    printf("Substring: %s\n", result);

    return 0;
}


void substring(char source[], int start, int count, char result[])
{
    int i;
    
    for(i = 0; i < start; i++){
        if (source[i] == '\0'){
            result[0] = '\0';
            return;
        }
    }

    for (i; i <= count + start; i++){
        if (source[i] == '\0'){
            result[i - start] = '\0';
            break;
        }
        result[i - start] = source[i];
    }
    return;
}