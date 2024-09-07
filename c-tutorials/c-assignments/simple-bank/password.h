#include <stdio.h>
#include <termios.h>
#include <unistd.h>

char pin[5] = {0};
char* password() {
    struct termios oldt, newt;

    // Get the current terminal settings
    tcgetattr(STDIN_FILENO, &oldt);

    // Make a copy of the old settings
    newt = oldt;

    // Turn off echo
    newt.c_lflag &= ~ECHO;

    // Apply the new settings
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    // Prompt for password
    printf("Enter Your 4-digit PIN: ");
    fflush(stdout);

    
    int i = 0;

    // Read characters one by one until 4 digits are entered
    while (i < 4) {
        char c = getchar();
        if (c >= '0' && c <= '9') {
            pin[i++] = c;
            putchar('*');
            fflush(stdout);
        } else if (c == '\n' || c == '\r') {
            // Ignore newline and carriage return characters
            continue;
        } else {
            // Invalid input, reset the loop
            printf("\nInvalid input. Please enter a 4-digit PIN.\n");
            
            i = 0;
        }
    }

    // Restore the original terminal settings
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

    return pin;

   // printf("\nYour PIN: %s\n", pin);

    
}