#include <stdio.h>
#include <time.h>

int main()
{
    // Get current time
    time_t current_time = time(NULL);
    struct tm *local_time = localtime(&current_time);

    // Set the time to 4.00pm
    local_time->tm_hour = 8;
    local_time->tm_min = 0;
    local_time->tm_sec = 0;

    // Convert struct tm to time_t
    time_t timestamp = mktime(local_time);

    // Print the timestamp
    printf("Timestamp for today at 4:00 pm: %ld\n", timestamp);

    return 0;
}