#include <stdio.h>

int main(void)
{
    int options;

    printf("Choose an option from 1 to 5\n");
    scanf("%d", &options);

    switch (options)
    {
    case 1:
        printf("You chose option 1\n");
        break;
    case 2:
        printf("You chose option 2\n");
        break;
    case 3:
        printf("You chose option 3\n");
        break;
    case 4:
        printf("You chose option 4\n");
        break;
    case 5:
        printf("You chose option 5\n");
        break;
    default:
        printf("Invalid option\n");
    }

    return 0;
}