#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void rmWhiteSpaces(char *str);

int main() {
    char str[40];

    printf("Enter a string with leading and or trailing white spaces: \n");
    fgets(str,sizeof(str),stdin);
    rmWhiteSpaces(str);
    printf("Your string : \"%s\"\n", str);

    return 0;
}

void rmWhiteSpaces(char *str) {
    int start = 0, end = strlen(str) - 1;

    // Trim leading white spaces
    while (isspace((unsigned char)str[start])) {
        start++;
    }

    // Trim trailing white spaces
    while (end > start && isspace((unsigned char)str[end])) {
        end--;
    }

    memmove(str, str + start, end - start + 1);

    // Null-terminate the trimmed string
    str[end - start + 1] = '\0';
}

