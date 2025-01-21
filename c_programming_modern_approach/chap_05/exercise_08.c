#include <stdio.h>

int main(void)
{
    int age;
    _Bool teenager;

    age = 16;

    if (age >= 13 && age <= 19){
        teenager = 1;
    }
    else {
        teenager = 0;
    }

    printf("Teenager: %d\n", teenager);

    return 0;
}