#include <stdio.h>

int main(void)
{
    int code_area;
    printf("Enter Georgia code area: ");
    scanf("%d", &code_area);

    switch (code_area)
    {
    case 229: printf("Area: Albany.\n"); break;
    case 404: printf("Area: Atlanta.\n"); break;
    case 470: printf("Area: Atlanta.\n"); break;
    case 478: printf("Area: Macon.\n"); break;
    case 678: printf("Area: Atlanta.\n"); break;
    case 706: printf("Area: Columbus.\n"); break;
    case 762: printf("Area: Columbus.\n"); break;
    case 770: printf("Area: Atlanta.\n"); break;
    case 912: printf("Area: Savannah.\n"); break;
    default: printf("Area code not recognized.\n"); break;
    }

    return 0;
}