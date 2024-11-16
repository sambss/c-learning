#include <stdio.h>
#define FACTOR (4.0f / 3.0f)
#define PI (3.1415f)

int main(void)
{
    int radius;
    printf("What is the sphere's radius? ");
    scanf("%d", &radius);
    printf("The volume from a sphere of 10 u.m. radius is: %.2f u.v.\n", PI * FACTOR * radius * radius * radius);

    return 0;
}