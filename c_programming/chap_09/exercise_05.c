#include <stdio.h>
#include <stdbool.h>

int find_string(char string_1[], char string_2[]);

int main(void)
{
    char string_1[] = "a chatterbox";
    char string_2[] = "box";
    int index;

    index = find_string(string_1, string_2);

    if (index < 0){
        printf("Substring not found on main string.\n");
    }
    else {
        printf("Index %i starts the substring.\n", index);
    }
    

    return 0;
}

int find_string(char string_1[], char string_2[])
{
    int i;
    int j = 0;
    int position = -1;

    if (string_2[j] == '\0'){
        return -1;
    }

    while(string_1[i] != '\0'){
        if ((string_1[i] == string_2[j]) && (position >= 0)){
            j++;
        }
        else if (string_1[i] == string_2[j]){
            position = i;
            j++;
        }
        else if (string_2[j] == '\0'){
            return position; /* It means all chars were checked */
        }
        else {
            j = 0;
            position = -1;
        }
        i++;
    } 

    if (string_2[j] == '\0'){
        return position; /* It means all chars were checked */
    }
    else {
        return -1; /* It means the substring wasn't found */
    }

}