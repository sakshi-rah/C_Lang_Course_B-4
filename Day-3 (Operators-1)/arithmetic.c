// Operators in C [a+b; a & b is Operand and + is Operator]
//  1. Arithmetic operators (+,-,*,/,%) = binary operators = 2 operands
// ** 2. Increment Decrement Operators(++,--) = unary operators = 1 operand
//  3. Assignment operators (=,+=,-=,*=,/=,%=)= binary operators = 2 operands
//  4. Relational Operators (<,<=,>,>=,==,!=)= binary operators = 2 operands
//  5. Logical operators (&&=and,||=or,!=not)= binary operators = 2 operands

// Aritmetic Operators Program:- (+, -, *, /, %(mod)) => mod = remainder

#include<stdio.h>

int main(){
    int a, b;
    //Addition(+)
    printf("Enter Value of a and b: ");
    scanf("%d%d", &a, &b); // a = 2, b = 4
    // int sum = a + b; // 6
    // printf("Addition of a&b: %d\n", sum); // Addition of a&b: 6
    printf("Addition of a&b: %d\n", a+b);

    //Substraction
    printf("Enter Value of a and b: ");
    scanf("%d%d", &a, &b); 
    int sub = a - b;
    printf("Substraction of a&b: %d\n", sub); 

    //Multification
    printf("Enter Value of a and b: ");
    scanf("%d%d", &a, &b); 
    int multi = a * b;
    printf("Multification of a&b: %d\n", multi); 

    //Mod
    printf("Enter Value of a and b: ");
    scanf("%d%d", &a, &b); 
    int mod = a % b;
    printf("Mod(%%) of a&b: %d\n", mod);

    //Division
    printf("Enter Value of a and b: ");
    scanf("%d%d", &a, &b);
    //type casting (int => float)
    float div = a/b; // a = 25.0, b = 4.0
    printf("Division of a&b: %.2f\n", div);
    printf("Division of a&b: %.2f\n", (float)a/b); //div = 6.25


    return 0;
}