#include <stdio.h>

int main()
{
    printf("Loading:   0%%");
    fflush(stdout); // Flush the output buffer to ensure immediate printing

    // Simulate a loading process
    for (int i = 0; i <= 100; ++i)
    {
        printf("\rLoading: %3d%%", i);
        fflush(stdout); // Flush the output buffer to ensure immediate printing
        // Simulate some delay (in real-world, this could be some actual task)
        for (volatile long long int delay = 0; delay < 10000000; ++delay)
            ;
    }
    printf("\nLoading complete.\n");

    return 0;
}
