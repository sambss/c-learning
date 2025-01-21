#include <stdio.h>

int main(void)
{
    int num_grade_1, num_grade_2;
    printf("Enter numerical grade: ");
    scanf("%1d%1d", &num_grade_1, &num_grade_2);

    switch (num_grade_1)
    {
    case 9:
        printf("Letter grade: A\n");
        break;
    case 8:
        printf("Letter grade: B\n");
        break;
    case 7:
        printf("Letter grade: C\n");
        break;
    case 6:
        printf("Letter grade: D\n");
        break;
    default:
        printf("Letter grade: F\n");
        break;
    }
    return 0;
}