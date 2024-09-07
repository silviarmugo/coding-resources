#include <stdio.h>

// #include <conio.h>
void TOH(int n, char origin, char destination, char mid_t);
int main()

{

    TOH(4, ‘A’,’B’,’C’);

    return 0;
}
void TOH(int n, char origin, char destination, char mid_t)
{

    if (n == 0)
    {

        return;
    }

    TOH(n - 1, origin, mid_t, destination);

    printf(“\n Move disc % d from tower % c to tower % c”, n, origin, destination);

    TOH(n - 1, mid_t, destination, origin);
}
Output: