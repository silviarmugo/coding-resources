#include <stdio.h>

// function prototype
void towerOfHanoi(int n, char source, char auxilliary, char destination);

int main(void)
{
    int n;
    printf("Please enter number of disks");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("please enter a number greater than 0");
        return 1;
    }
    // declaring and initialization of variables the 3 rods
    char source = 'A', auxiliary = 'B', destination = 'C';

    printf("Tower of Hanoi solution:\n");
    // calling the function towerOfHanoi
    towerOfHanoi(n, source, auxiliary, destination);

    return 0;
}
// the function that solves the Hanoi problem
void towerOfHanoi(int n, char source, char auxiliary, char destination)
{

    // base case
    if (n == 1)
    {
        printf("move disk 1 from rod %c to rod %c\n", source, destination);
        return;
    }
    else
    {
        // the recursive case
        //  Move n-1 disks from source to auxiliary using destination as auxiliary
        towerOfHanoi(n - 1, source, auxiliary, destination);

        // Move the nth disk from source to destination
        printf("Move disk %d from rod %c to rod %c\n", n, source, destination);

        // Move n-1 disks from auxiliary to destination using source as auxiliary
        towerOfHanoi(n - 1, auxiliary, destination, source);
    }
}