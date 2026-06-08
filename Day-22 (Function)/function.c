/*
Function(): A function in C is a small block of code that is written to do one specific work.
Instead of writing the same code again and again, we write it once inside a function
and use it many times with different aurguments.

return type:
1) int = return something integer value(0). (function ke samne = int return type) (variable ke samne = int data type)
2) void = no need to return anything.

Types of Function:
1) Predefine Function(): printf(), scanf(), strlen()
2) User Defined Function():
    Syntax of Function(): declaration of function
    return_type function_name(Aug list){ // Write Outside of the main function
    code; // int, void
    }

    call the function:
    function_name(Aug list); => in main function

** Category of user defined function:*

1.Function with no aug and no return value 
2.Function with aug and no return value
3.Function with no aug and return value
4.Function with aug and return value

*/

#include<stdio.h>

//Declaration of Function
int get(){
    printf("I AM 1ST FUNCTION!\n");
    return 0;
}

void main(){
    // calling the function
    get();
    get();
    get();
    get();
    get();
    return;
}

