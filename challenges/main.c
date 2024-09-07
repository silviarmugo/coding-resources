#include <stdio.h>
#include <string.h>

void solution(char *str);
void solution2(char *str);
int main(void)
{
    char name[] = "Griffin";
    solution2(name);
    // printf("%s\n", name);

    return 0;
}
void solution(char *str)
{
    int length = strlen(str);
    int startIndex = 0;
    int endIndex = length - 1;

    while (startIndex < endIndex)
    {
        char current = str[startIndex];

        str[startIndex] = str[endIndex];
        str[endIndex] = current;

        startIndex++;
        endIndex--;
    }
}
void solution2(char *str)
{
    int length = strlen(str);
    int endIndex = length - 1;

    for (int i = endIndex; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
