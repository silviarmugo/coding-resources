#include <stdio.h>
#include <string.h>

// Struct for Contacts
struct Contact
{
    int contact_id;
    char name[50];
    char email[50];
    char phone_number[15];
};

// Struct for Department
struct Department
{
    int department_id;
    char name[50];
    int manager_id;
};

// Struct for Attendance
struct Attendance
{
    int employee_id;
    char date[11];          // Assuming date format "YYYY-MM-DD"
    char check_in_time[6];  // Assuming time format "HH:MM"
    char check_out_time[6]; // Assuming time format "HH:MM"
};

// Struct for Employees
struct Employee
{
    int employee_id;
    char name[50];
    int department_id;
    float salary;
    struct Contact contact_info;
    struct Attendance attendance_info;
};

// Struct for Branches
struct Branch
{
    int branch_id;
    char name[50];
    char location[50];
};

int main()
{
    // Creating dummy data for each struct
    struct Contact contact1 = {1, "John Doe", "john.doe@example.com", "+1234567890"};
    struct Department department1 = {1, "Engineering", 1001};
    struct Attendance attendance1 = {101, "2024-02-10", "09:00", "17:00"};
    struct Branch branch1 = {1, "Head Office", "New York"};

    // Creating an employee instance and initializing with dummy data
    struct Employee employee1 = {101, "Alice Smith", 1, 60000.0, contact1, attendance1};

    // Displaying the dummy data
    printf("Employee ID: %d\n", employee1.employee_id);
    printf("Name: %s\n", employee1.name);
    printf("Department ID: %d\n", employee1.department_id);
    printf("Salary: %.2f\n", employee1.salary);
    printf("Contact Info:\n");
    printf("   Name: %s\n", employee1.contact_info.name);
    printf("   Email: %s\n", employee1.contact_info.email);
    printf("   Phone: %s\n", employee1.contact_info.phone_number);
    printf("Attendance Info:\n");
    printf("   Date: %s\n", employee1.attendance_info.date);
    printf("   Check-in Time: %s\n", employee1.attendance_info.check_in_time);
    printf("   Check-out Time: %s\n", employee1.attendance_info.check_out_time);

    return 0;
}
