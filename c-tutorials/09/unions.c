// #include <stdio.h>
// #include <string.h>

// typedef union
// {
//     int id;
//     char name[20];
// } Student;

// int main()
// {
//     Student student;

//     student.id = 23;
//     strcpy(student.name, "Super");

//     printf("Id: %d\n", student.id);
//     printf("Name: %s\n", student.name);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

typedef union
{
    int id;
    char name[20];
} Student;

int main()
{
    Student student;

    student.id = 23;
    strncpy(student.name, "Super", sizeof(student.name) - 1);
    student.name[sizeof(student.name) - 1] = '\0'; // Ensure null termination

    printf("Id: %d\n", student.id);
    printf("Name: %s\n", student.name);

    return 0;
}