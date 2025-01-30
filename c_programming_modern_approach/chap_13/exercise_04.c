#include <stdio.h>

int read_line(char str[], int n);

int main(void)
{   
    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    /* terminates string */
    return i;
    /* number of characters stored */
}

int read_line_a(char str[], int n)
{
    int ch, i = 0;

    while(ch = getchar() == ' ' && i < n)
    {
        i++;
    }

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    /* terminates string */
    return i;
    /* number of characters stored */
}

int read_line_b(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n && ch != ' ')
            str[i++] = ch;
    str[i] = '\0';
    /* terminates string */
    return i;
    /* number of characters stored */
}

int read_line_c(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    
    str[i++] = ch;
    str[i] = '\0';
    /* terminates string */
    return i;
    /* number of characters stored */
}