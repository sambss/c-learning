#include <stdio.h>

void censor(char *original);

int main(void)
{
    char str[] = "foo something foo";

    censor(str);
    printf("%s\n", str);

    return 0;
}

void censor(char *original)
{
    while(*original != '\0')
    {
        if ((*original == 'f') && (*(original + 1) == 'o') && (*(original + 2) == 'o'))
        {
            *original = 'x';
            *(original + 1) = 'x';
            *(original + 2) = 'x';
        }
        original++;
    }

}