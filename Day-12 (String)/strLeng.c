/*
String Handling Function in C Programming
strlen() = finding the length of string

*/

#include<stdio.h>
#include<string.h>
int main(){
    //1. String length strlen();
    char name[30];
    printf("Enter Name: ");
    scanf("%[^\n]s", &name);
    printf("Name: %s\n", name);
    // int length = strlen(name);
    // printf("Length of Name is %d\n", length);
    printf("Length of Name is %d\n", strlen(name));

    return 0;
}