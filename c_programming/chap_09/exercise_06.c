#include <stdio.h>

void remove_string(char string[], int start_index, int num_chars_removed);


int main(void)
{
    char string[] = "Some String to Test It";
    int start_index = 5;
    int num_chars_removed = 7;

    remove_string(string, start_index, num_chars_removed);

    printf("New string: %s\n", string);

    return 0;
}


void remove_string(char string[], int start_index, int num_chars_removed)
{
    int i = 0;
    int final_position = start_index + num_chars_removed;

    while (string[i] != '\0') {
        i++;
    }

    /* Decide o numero de chars deletados */
    if (final_position > i) {
        num_chars_removed = i - start_index;
    }

    /* Itera a partir do início da delecao */
    i = start_index + num_chars_removed;

    while(string[i] != '\0'){

        string[i - num_chars_removed] = string[i];
        i++;
        
    }

    string[i - num_chars_removed] = '\0';
}