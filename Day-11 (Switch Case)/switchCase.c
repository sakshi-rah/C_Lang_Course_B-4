/* Switch Case: The switch statement in C is a control flow statement that allows for the selection
of one of many code blocks to be executed, based on the value of an expression. It serves as an
alternative to a long if-else else-if ladder when dealing with multiple conditions
based on a single variable.*/

//  Switch Case Syntax
/*
switch(expression/value){
    case value1: statement
    break;
    case value2: statement
    break;
    case value3: statement
    break;
    default: statement
    break;
}
*/

#include<stdio.h>

int main(){
    // //Mini calculator using switch case
    int num1, num2;
    printf("Enter Value of num1 & num2: ");
    scanf("%d%d", &num1, &num2);

    char ch;
    printf("Enter Operator(+, -, *, /, %): ");
    scanf(" %c", &ch);

    //apply switch case
    switch(ch){
        case '+': printf("Sum of Num1 & Num2: %d\n", num1 + num2);
        break;
        case '-': printf("Sub of Num1 & Num2: %d\n", num1 - num2);
        break;
        case '*': printf("Multi of Num1 & Num2: %d\n", num1 * num2);
        break;
        case '/': printf("Div of Num1 & Num2: %d\n", num1 / num2);
        break;
        case '%': printf("Mod of Num1 & Num2: %d\n", num1 % num2);
        break;
        default: printf("Invalid Operator!");
        break; 
    }

    //Finding Week days
    // int day;
    // printf("Enter Day: ");
    // scanf("%d", &day);

    // //apply switch case
    // switch(day){
    //     case 1: printf("Sunday!");
    //     break;
    //     case 2: printf("Monday!");
    //     break;
    //     case 3: printf("Tuesday");
    //     break;
    //     case 4: printf("Wednesday");
    //     break;
    //     default: printf("Invalid Day!");
    //     break;
    // }

    //Finding Color Name
    // char colName; // expression
    // printf("Enter Color Code: ");
    // scanf(" %c", &colName);

    // switch(colName){
    //     case 'w': printf("White");
    //     break;
    //     case 'b': printf("Black");
    //     break;
    //     case 'r' : printf("Red");
    //     break;
    //     default: printf("Invalid Color Code!");
    //     break;
    // }
    

    return 0;
}
