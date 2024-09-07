#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <curses.h>

// Function prototypes
void setNonCanonicalMode();
void resetTerminalMode();
void clearScreen();
void drawBoard(int width, int height, int snakeX, int snakeY);

// Function to set terminal to non-canonical mode for single key presses
void setNonCanonicalMode()
{
    struct termios t;
    tcgetattr(STDIN_FILENO, &t);
    t.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
}

// Function to reset terminal mode to canonical mode
void resetTerminalMode()
{
    struct termios t;
    tcgetattr(STDIN_FILENO, &t);
    t.c_lflag |= ICANON | ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
}

// Function to clear the screen
void clearScreen()
{
    printf("\033[H\033[J");
}

// Function to draw the game board
void drawBoard(int width, int height, int snakeX, int snakeY)
{
    clearScreen();

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (i == 0 || i == width - 1 || j == 0 || j == height - 1)
            {
                printf("#"); // Draw the borders
            }
            else if (i == snakeX && j == snakeY)
            {
                printf("*"); // Draw the snake head
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    // Set the initial position of the snake
    int snakeX = 5, snakeY = 5;
    int direction = 0; // 0: right, 1: down, 2: left, 3: up

    int width = 20, height = 10; // Size of the game board

    initscr();  // Initialize curses mode
    timeout(0); // Set non-blocking mode

    while (1)
    {
        drawBoard(width, height, snakeX, snakeY);

        // Move the snake
        switch (direction)
        {
        case 0:
            snakeX++;
            break;
        case 1:
            snakeY++;
            break;
        case 2:
            snakeX--;
            break;
        case 3:
            snakeY--;
            break;
        }

        // Check for collision with the walls
        if (snakeX == 0 || snakeX == width - 1 || snakeY == 0 || snakeY == height - 1)
        {
            endwin(); // End curses mode
            printf("\nGame Over! You hit the wall.\n");
            break;
        }

        usleep(100000); // Introduce a delay (in microseconds) for smoother animation

        int key = wgetch(stdscr); // Use wgetch for keyboard input
        switch (key)
        {
        case 'w':
            direction = 3;
            break;
        case 's':
            direction = 1;
            break;
        case 'a':
            direction = 2;
            break;
        case 'd':
            direction = 0;
            break;
        case 'x':
            endwin(); // End curses mode
            printf("\nGame Over! You quit the game.\n");
            return 0;
        }
    }

    return 0;
}
