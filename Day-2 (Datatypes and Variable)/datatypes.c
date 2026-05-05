// datatypes (4)
/*
1) int = integer value = a = 20, -56;
2) float = decimal value = b = 45.67; 
3) char = charecter = c = 'A' or 'a';
4) double = large number of decimal value = d = 4567.6789432564556677898765432456789;
*/

// datatype formate specifiers:
/*
1) int = "%d"
2) float = "%f" or "%.2f"
3) char = "%c", string = "%s"
4) double = "%lf" or "%.2f"
*/

// Rules of declaration of variables
/*  1) Variable name do not started with numbers as well as special symbols
    2) Variable doesn't contain any type of special symbols
    3) if i want separate variable name that time we use (_) symbol. (!not = -, " ")
    4) Variable contain numbers also but in middle or end.
    5) Variable name contain camel case letter (eg. stdNameOfAiml)

**** variable declaration syntax = datatype variable_name = value; // variable assignment

e.g. int number; = T
int 2num; = F
float @name; = F
char std_name; = T
char emp-name; = F
int num2; = T
double std_1_per; = T
char studentRollNo; = T
*/

#include<stdio.h>

int main()
{
    int num = 54;
    char stdName = 'A';
    float stdPer = 99.99;
    double area = 456.4456833456;

    printf("Number: %d\n", num); // Number: 54
    printf("Student Name: %c\n", stdName); // Student Name: A
    printf("Student Per: %.2f\n", stdPer); // Student Per: 99.99
    printf("Area: %f\n", area); // Area:456.4456833456

    // Taking Input From User using scanf() function

    int roll_no;
    printf("Enter Your Roll No: ");
    scanf("%d", &roll_no);
    printf("Roll No: %d\n", roll_no);
    return 0;
}