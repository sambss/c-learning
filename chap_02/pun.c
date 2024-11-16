/* Name: pun.c
*  This is a comment.
*/
# include <stdio.h> // This is another type of comment from C99 standard

int main(void)
{
    int height, length, width, volume;
    float profit, loss;

    height = 8;
    length = 10;
    width = 12;

    volume = height * length * width;

    printf("Height, Lenght, and Width are: %d %d %d\n", height, length, width);
    printf("Volume: %d\n", volume);

    profit  = 2150.48f;

    printf("Profit: $%.2f\n", profit);
    printf("To C, or not to C: that is the question.\n");
    return 0;
}