#include <stdio.h>
#include <stdlib.h>

void copy_array(char a[], char b[], int n);
void find_larger_string(char a[], char b[], int size_a, int size_b);
char* concat_strings(char a[], char b[], int size_a, int size_b);

int main(void)
{
    char letter = '$';
    printf("%c\n", letter);

    char *ptr = "Pointers are fun!";
    printf("%s\n", ptr);

    char *ptr2;
    ptr2 = malloc(18 * sizeof(char));
    if (ptr2 == NULL){
        return 1;
    }
    free(ptr2);

    // char *ptr3;
    // ptr3 = malloc(80 * sizeof(char));
    // puts("Input some text: ");
    // gets(ptr3);
    // puts(ptr3);
    // free(ptr3);

    char *a = "a b c d e";
    char *b;
    b = malloc(sizeof(a));
    copy_array(a, b, sizeof(a)/sizeof(a[0]));
    puts(b);
    free(b);

    char *c = "Lower String";
    char *d = "Bigger String";
    find_larger_string(c, d, sizeof(c), sizeof(d));


    char *e = "Hello ";
    char *f = "World";
    char *g;
    g = concat_strings(e, f, sizeof(e) - 1, sizeof(f) - 1);
    printf("%s\n", g);
    free(g);

    return 0;
}

void copy_array(char a[], char b[], int n)
{
    int i;

    for(i = 0; i <= n; i++)
    {
        b[i] = a[i];
    }
}

void find_larger_string(char a[], char b[], int size_a, int size_b)
{
    /* I can't use sizeof inside a function to get the size of an array. */
    if (size_a > size_b)
    {
        printf("Bigger: %s\n", a);
    }
    else
    {
        printf("Bigger: %s\n", b);
    }

}

char* concat_strings(char a[], char b[], int size_a, int size_b)
{
    char* str_ptr;
    int i = 0, j = 0;
    str_ptr = malloc(size_a + size_b + 1);

    while(a[i] != '\0')
    {
        *(str_ptr + i) = a[i];
        i++;
    }
    while(b[j] != '\0')
    {
        *(str_ptr + i + j) = b[j];
        j++;
    }

    *(str_ptr + i + j) = '\0';
    
    return str_ptr;
}