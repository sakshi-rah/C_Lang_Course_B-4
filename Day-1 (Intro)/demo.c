//Introduction of C Lang and Basic Syntax

#include<stdio.h> // header file (stdio= standard input output, # = preprocessor)

int main(){ // 2 type of return type- 1)void = null 2)int = integers number values(0)

    // printf("Hello C learners! \n"); // "\n = next line"
    // printf("Hello Mam!");

    char name[20];
    int age;
    printf("enter name: ");
    scanf("%s", &name);
    printf("Name: %s\n", name);

    printf("enter age: ");
    scanf("%d", &age);
    printf("Age: %d", age);


    return 0;
}