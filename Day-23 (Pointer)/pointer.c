/*
Defination: A pointer is a variable that stores the address of another variable but its has simillar data types.
 *variable_name = for create pointer, &variable_name = for denoted address.

Syntax: data_type *variable_name;
Example:
int x=10; // variable declaration and initialization
int *ptr; // Pointer declaration
ptr = &x; // stored address of x variable

Note: we used %p formate specifier for only getting address of variable
*/

#include<stdio.h>

int main(){
    int a = 10; // value
    int *ptr;
    ptr = &a; // address storing (a456j56)

    printf("Value of a: %d\n", a); // Value of a: 10
    printf("Address of a: %p\n", &a); // Address of a: 0061FF18
    printf("Address of ptr: %p\n", ptr); // Address of a: 0061FF18
    printf("Value of ptr: %d\n", *ptr); // Value of ptr: 10

    printf("\n\n\n");

    //Changing Value using Pointer Variable
    int b = 20;
    int *p = &b;

    printf("Value of b: %d\n", b);
    printf("Value of p: %d\n", *p);

    *p = 40;
    printf("Address of b: %p\n", &b);
    printf("Address of p: %p\n", p);

    printf("Value of b: %d\n", b);
    printf("Value of p: %d\n", *p);

    printf("\n\n\n");
    
    //Array of pointer  or pointer in array

    int arr[5] = {20, 35, 50, 65, 80};
    int *arrPtr = &arr;

    for(int i = 0; i < 5; i++){
        printf("Value of arr[%d]: %d\n", i, *(arrPtr+i));
    }
    
    return 0;
}