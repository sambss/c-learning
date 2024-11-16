/* Computes the dimensional weight of a 12" x 10" x 8" box */
#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;
    printf("Enter the height of the box: ");
    scanf("%d", &height);
    
    printf("Enter the length of the box: ");
    scanf("%d", &length);

    printf("Enter the width of the box: ");
    scanf("%d", &width);

    volume = height * length * width;

    weight = (volume + 165) / 166;
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    printf("Volume can also be displayed as %d\n", height * length * width);
    return 0;
}