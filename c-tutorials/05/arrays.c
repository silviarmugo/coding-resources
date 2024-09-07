#include <stdio.h>

int main()
{
    // declarion and initialization of the array
    int nums[5] = {3, 7, 8, 12, 14};
    char *genres[] = {"rhumba", "ohangla", "reggae", "bongo"};

    int len = sizeof(nums) / sizeof(nums[0]);
    int length = sizeof(genres) / sizeof(genres[0]);

    // while (index < length)
    // {
    //     printf("%d\n", nums[index]);
    //     index++;
    // }
    for (int index = 0; index < length; index++)

    {

        printf("%s\n", genres[index]);
    }
    for (int index = 0; index < len; index++)
    {
        printf("%d\n", nums[index]);
    }
    return 0;
}