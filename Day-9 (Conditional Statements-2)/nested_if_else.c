/* Nested if else: A nested if-else statement in C involves placing one if or if-else statement inside 
another if or else block.*/

/*if (condition1) {
    // Code to execute if condition1 is true
    if (condition2) {
        // Code to execute if condition1 and condition2 are true
    } else {
        // Code to execute if condition1 is true and condition2 is false
    }
} else {
    // Code to execute if condition1 is false
    if (condition3) {
        // Code to execute if condition1 is false and condition3 is true
    } else {
        // Code to execute if condition1 is false and condition3 is false
    }
}*/

#include<stdio.h>

void main(){
    int marks = 332, attend = 65;
    if(marks >= 200){ // 499>=200 = t // 332>=200=t 
        if(attend >= 75){ // 75>=75 = t // 65>=75=f
            printf("you are pass!");
        }else{
            printf("Your attendance is below 75!");
        }
    }else{
        printf("You are Fail!");
    }

    return;
}