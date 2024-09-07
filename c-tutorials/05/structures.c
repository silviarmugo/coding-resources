#include <stdio.h>

// implement structs
struct Address
{
    char street[40];
    char houseNumber[4];
    char city[50];
};

struct class
{
    int classid;
    char classname[20];
};

struct Students
{
    int id;
    char name[50];
    int age;
    char course[100];

    struct Address address;
    struct class class;
};

int main(void)
{
    struct Students stud = {
        45,
        "Silviar Mugo",
        12,
        "Computer Science",
        {"ICIPE Road, kasarani", "D2", "Nairobi"},
        {1, "Form one"}};

    // struct Students student = {
    //     45,
    //     "Jeddy Nzila",
    //     6,
    //     "Computer Science",
    //     {"Karen", "A12", "Nairobi"},
    //     {1, "Form one"},

    // };

    printf("Name: %s\n", stud.name);
    printf("Age: %d\n", stud.age);
    printf("Course: %s\n", stud.course);

    printf("Street: %s\n", stud.address.street);
    printf("Street: %s\n", stud.address.houseNumber);
    printf("Street: %s\n", stud.address.city);

    printf("class id: %d\n", stud.class.classid);
    printf("Class name: %s\n", stud.class.classname);

    return 0;
}