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
    struct contactInfo contactInfo;       // Corrected
    struct attendanceInfo attendanceInfo; // Corrected
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
    struct contactInfo contact1 = {1, "Silviar Mugo", "silviarmugo@example.com", "+1234567890"};
    struct Department department1 = {1, "Engineering", 1001};
    struct attendanceInfo attendance1 = {101, "2024-02-10", 1644504000, 1644532800}; // Example timestamps
    struct branches branch1 = {1, "Head Office", "Nairobi"};

    struct contactInfo contact2 = {2, "Mary Mugo", "marymugo@example.com", "+254742418134"};
    struct Department department2 = {2, "Engineering", 1001};
    struct attendanceInfo attendance2 = {102, "2024-02-09", 1644417600, 1644453000}; // Example timestamps
    struct branches branch2 = {2, "Kutus Retail", "Kutus"};

    // Declaring instances of struct and initializing members of struct
    struct Employee employee3 =
        {
            300,
            "Christabell Murage",
            2, // Department ID corrected
            40000,
            12268974,
            42,
            {3, "Christabell Murage", "christabellmurage2415@gmail.com", "+254725387118"},
            {300, "2024-02-10", 1707541200, 1707570000}};

    // Printing employee information
    printf("Employee ID: %d\n", employee3.employeeId);
    printf("Name: %s\n", employee3.name);
    printf("Department ID: %d\n", employee3.departmentId);
    printf("Salary: %.2f\n", employee3.salary);
    printf("ID number: %ld\n", employee3.idNumber); // Corrected
    printf("Age: %d\n", employee3.age);             // Age missing
    printf("Contact Info:\n");
    printf("   Name: %s\n", employee3.contactInfo.name);
    printf("   Email: %s\n", employee3.contactInfo.email);
    printf("   Phone: %s\n", employee3.contactInfo.phoneNumber); // Corrected
    printf("Attendance Info:\n");
    printf("   Date: %s\n", employee3.attendanceInfo.date);
    printf("   Check-in Time: %s", ctime(&employee3.attendanceInfo.checkInTime));   // Corrected
    printf("   Check-out Time: %s", ctime(&employee3.attendanceInfo.checkOutTime)); // Corrected

    return 0;
}
