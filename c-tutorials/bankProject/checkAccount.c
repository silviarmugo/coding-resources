#include <stdio.h>
#include <stdbool.h>

#include "functions.c"
#include "prototypes.h"

#define CUSTOMER_FILE "customers.csv"

bool checkAccountNumber(char *AccountEntered)
{
    FILE *file;
    char line[256];
    char account[10];
    bool accountFound = false;

    file = fopen("customers.csv", "r");
    if (file == NULL)
    {
        printf("Error when opening the file");
        return false;
    }
    while (fgets(line, sizeof(line), file))
    {
        int itemsRead = sscanf(line, "%*[^], %10[^], %*[^], %*[^], %*[^], %*[^]", account);

        if (itemsRead == 1)
        {
            int result = strcmp(AccountEntered, account);
            if (result == 0)
            {
                accountFound = true;
                break;
            }
        }
    }
    fclose(file);
    if (!accountFound)
    {
        printf("Account not Found\n");
    }
    return true;
}