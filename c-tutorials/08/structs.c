#include <stdio.h>
#include <string.h>
#include <time.h>

// Define structs
typedef struct
{
    char name[50];
    char email[40];
    char phoneNumber[20];
} contactInfo;

typedef struct
{
    int employeeId;
    char date[20];
    time_t checkInTime;
    time_t checkOutTime;
} attendanceInfo;

typedef struct
{
    int departmentId;
    char departmentName[50];
    char departmentHead[50];
} department;

typedef struct
{
    int branchId;
    char branchName[20];
    char location[30];
} branches;

typedef struct
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
} employee;