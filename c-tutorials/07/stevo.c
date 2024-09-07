#include <stdio.h>

#define KES 161.5
#define UGS 3810.8
#define TZS 2520

int main()
{
    float num, result;
    int value;

    printf("Enter amount in USD: ");
    scanf("%f", &num);

    printf("Enter number to choose type of currency, 1.Kenya shillings, 2.Uganda shillings, 3.Tanzanian shillings: ");
    scanf("%d", &value);

    if (value == 1)
    {
        result = KES * num;
    }
    else if (value == 2)
    {
        result = UGS * num;
    }
    else if (value == 3)
    {
        result = TZS * num;
    }
    else
    {
        printf("Number is not valid");
        return 1;
    }

    printf("%.2f of USD is equivalent to %.2f\n", num, result);
    return 0;
}