// Array of Characters:
/* A string is essentially a sequence of individual char data types stored 
    contiguously in memory, just like any other array.
    Null Termination:
    The crucial element that defines a C string is the null character (\0). 
    This special character signifies the end of the string.

    -for string we use %s.

    syntax of string :
    datatype string_name [size of str] = "string";

    string = hello
*/

#include<stdio.h>

int main(){
    // char str1 [20];
    // printf("Enter Value of str1: ");
    // scanf("%s", &str1);
    // printf("String is : %s\n", str1);

    // Print Sentence
    // char name[30];
    // printf("Enter Your Name: ");
    // scanf("%[^\n]s", &name);
    // printf("Name : %s\n", name);

    char school[] = {"International School"};
    char schoolName[] = "Public School";
    printf("School Name: %s\n", school);
    printf("School Name: %s\n", schoolName);
    return 0;
}