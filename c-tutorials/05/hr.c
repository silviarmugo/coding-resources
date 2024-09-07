#include <stdio.h>
#include <string.h>
#include <time.h>

// Define structs
struct contactInfo
{
    int contactId;
    char name[50];
    char email[40];
    char phoneNumber[20];
};

struct attendanceInfo
{
    int employeeId;
    char date[20];
    time_t checkInTime;
    time_t checkOutTime;
};

struct Employee
{
    int employeeId;
    char name[50];
    int departmentId;
    float salary;
    long int idNumber;
    int age;
    struct contactInfo contactInfo;
    struct attendanceInfo attendanceInfo;
};

struct Department
{
    int departmentId;
    char departmentName[50];
    int managerId;
};

struct branches
{
    int branchId;
    char branchName[20];
    char location[30];
};

int main()
{
    // Creating dummy data for every struct
    struct Department department3 = {1, "IT", 1001};
    struct attendanceInfo attendance3 = {101, "2024-02-10", 1644504000, 1644532800}; // Example timestamps
    struct branches branch3 = {1, "Head Office", "Nairobi"};

    // Declaring instances of struct and initializing members of struct
    struct Employee employee1 = {101, "Jeddy Nzila", 101, 230000.00, 123456, 19, {4, "Jeddy Nzila", "jeddynzila@example.com", "+254712345678"}, {300, "2024-02-10", 1707541200, 1707570000}};

    struct Employee employee3 =
        {
            300,
            "Silviar Mugo",
            2,
            400000.45,
            12268974,
            42,
            {3, "Silviar Mugo", "silviarmugo@gmail.com", "+254725387118"},
            {300, "2024-02-10", 1707541200, 1707570000}};

    // Printing employee information
    printf("Employee ID: %d\n", employee3.employeeId);
    printf("Name: %s\n", employee3.name);
    printf("Department ID: %d\n", employee3.departmentId);
    printf("Salary: %.2f\n", employee3.salary);
    printf("ID number: %ld\n", employee3.idNumber);
    printf("Age: %d\n", employee3.age);
    printf("Contact Info:\n");
    printf("   Name: %s\n", employee3.contactInfo.name);
    printf("   Email: %s\n", employee3.contactInfo.email);
    printf("   Phone: %s\n", employee3.contactInfo.phoneNumber);
    printf("Attendance Info:\n");
    printf("   Date: %s\n", employee3.attendanceInfo.date);
    printf("   Check-in Time: %s", ctime(&employee3.attendanceInfo.checkInTime));
    printf("   Check-out Time: %s", ctime(&employee3.attendanceInfo.checkOutTime));

    printf("Employee ID: %d\n\n\n", employee1.employeeId);
    printf("Name: %s\n", employee1.name);
    printf("Department ID: %d\n", employee1.departmentId);
    printf("Salary: %.2f\n", employee1.salary);
    printf("ID number: %ld\n", employee1.idNumber);
    printf("Age: %d\n", employee1.age);
    printf("Contact Info:\n");
    printf("   Name: %s\n", employee1.contactInfo.name);
    printf("   Email: %s\n", employee1.contactInfo.email);
    printf("   Phone: %s\n", employee1.contactInfo.phoneNumber);
    printf("Attendance Info:\n");
    printf("   Date: %s\n", employee1.attendanceInfo.date);
    printf("   Check-in Time: %s", ctime(&employee1.attendanceInfo.checkInTime));
    printf("   Check-out Time: %s", ctime(&employee1.attendanceInfo.checkOutTime));
    return 0;
}
