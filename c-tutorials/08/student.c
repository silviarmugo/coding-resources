#include <stdio.h>

typedef struct
{
    int Id;
    char name[20];
} Address;
typedef struct
{
    int Id;
    char name[20];
} Hostel; // creating a student struct
typedef struct
{
    short int Id; // struct members
    char name[50];
    char class[30];
    char course[100];
    int age;

    Address *addr;
    Hostel *hostel;
} Student;
int main(void)
{

    Address address = {1, "Kasarani, Mwiki"};
    Hostel hostel = {2, "Nyayo"};
    Student student = {
        1,
        "David Ogubi",
        "Form 3",
        "Mathematics",
        30,
        &address,
        &hostel};
    printf("Name: %s\n", student.name);
    printf("Course: %s\n", student.course);
    printf("Age: %d\n", student.age);
    printf("Address: %s\n", student.addr->name);
    printf("House: %s\n", student.hostel->name);
    return 0;
}