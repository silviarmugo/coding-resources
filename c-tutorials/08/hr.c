#include <stdio.h>
#include <string.h>
#include <time.h>

// Define structs
struct contactInfo
{
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
struct department
{
    int departmentId;
    char departmentName[50];
    char departmentHead[50];
};

struct branches
{
    int branchId;
    char branchName[20];
    char location[30];
};
struct employee
{
    int employeeId;
    char name[50];
    float salary;
    long int idNumber;
    int age;
    struct contactInfo contactInfo;
    struct attendanceInfo attendanceInfo;
    struct department department;
    struct branches branch;
};

int main()
{
    // Creating dummy data for every struct

    // creating dummy data for contact info
    struct contactInfo contact1 = {"Silviar Mugo", "silviarmugo@structexamples.com", "+254123456789"};
    // creating dummy data for attendance info
    struct attendanceInfo attendance1 = {101, "2024-02-10", 1707541200, 1707570000};
    // creating dummy data for department
    struct department department1 = {1, "Software Engineering", "Dr Basil"};
    // creating dummy data for branch
    struct branches branch1 = {01, "Head Office", "Nairobi City"};
    // creating dummy data for employee
    struct employee employee1 =
        {
            101,
            "Silviar Mugo",
            550236.85,
            12345678,
            25,
            contact1,
            attendance1,
            department1,
            branch1};

    // printing employee1 details
    printf("EMPLOYEE DETAILS");
    printf("Employee Id %d", employee1.employeeId);
    printf("Name: %s\n", employee1.name);
    printf("Salary: %.2f\n", employee1.salary);
    printf("ID Number: %ld\n", employee1.idNumber);
    printf("Age: %d\n\n", employee1.age);
    printf("CONTACT INFO:\n");
    printf("   Name: %s\n", employee1.contactInfo.name);
    printf("   Email: %s\n", employee1.contactInfo.email);
    printf("   Phone Number: %s\n\n", employee1.contactInfo.phoneNumber);
    printf("ATTENDANCE INFO:\n");
    printf("   Date: %s\n", employee1.attendanceInfo.date);
    printf("   Check-in Time: %ld\n", employee1.attendanceInfo.checkInTime);
    printf("   Check-out Time: %ld\n\n", employee1.attendanceInfo.checkOutTime);
    printf("DEPARTMENT DETAILS:\n");
    printf("Department ID: %d\n", department1.departmentId);
    printf("Department Name: %s\n", department1.departmentName);
    printf("Manager ID: %s\n\n", department1.departmentHead);
    printf("BRANCH DETAILS:\n");
    printf("Branch ID: %d\n", branch1.branchId);
    printf("Branch Name: %s\n", branch1.branchName);
    printf("Location: %s\n", branch1.location);

    return 0;
}
