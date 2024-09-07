#include <stdio.h>

void towerOfHanoi(int n, char rod1[], char rod2[], char rod3[]);

int main() {
    int numberofDisks;

    printf("Enter the number of disks: ");
    scanf("%d", &numberofDisks);

    // find the number of steps by 2^(numberofDisks)-1
    int numberOfSteps = 1;
    for (int i = 0; i < numberofDisks; i++) {
        numberOfSteps *= 2;
    }
    numberOfSteps -= 1;

    printf("\nThere will be %d steps which are :\n", numberOfSteps);
    towerOfHanoi(numberofDisks, "original rod", "final rod", "buffer rod");

    return 0;
}

void towerOfHanoi(int n, char rod1[], char rod2[], char rod3[]) {
    if (n == 1) {
        printf("Move disk 1 from the %s to the %s\n", rod1, rod2);
        return;
    }
    towerOfHanoi(n - 1, rod1, rod3, rod2);
    printf("Move disk %d from the %s to the %s\n", n, rod1, rod2);
    towerOfHanoi(n - 1, rod3, rod2, rod1);
}
