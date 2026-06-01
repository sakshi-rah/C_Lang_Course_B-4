// Structure in C Programming using struct keyword :- it is a user defined data type, structure is 
// collection of different type of data type is known as a structure.
// predef data_type: int, float, char, double
// user def data_type: structure

/* Syntax :
struct structure_name{
    data_type variable_name;
    data_type variable_name;
    data_type variable_name;
};
*/

#include<stdio.h>
int i = 1;
struct student{
    int roll_no; //4 byte
    char name[30]; // 1 byte
    float per; // 4 byte
    double attend; // 8 byte = 17 byte memory allot
};
// In case of Union you choose highest byte = 8 byte (only lagest size of variable)

int main(){

    struct student std = {20, "Payal", 91.56256, 98.569};

    printf("****** Students Detail ******\n");

    printf("Student Roll No: %d\n", std.roll_no);
    printf("Student Name: %s\n", std.name);
    printf("Student Percentage: %.2f\n", std.per);
    printf("Student Attendance: %.2f\n", std.attend);

    return 0;
}