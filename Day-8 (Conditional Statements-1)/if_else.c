// Use if to specify a block of code to be executed, if a specified condition is true (if=T)
// Use else to specify a block of code to be executed, if the same condition is false (else=F)

// syntax of if
/*if(condition){
    code
    }*/

// syntax of if-else
/* if(condition){
        code
    }else{
        code
    }*/

#include<stdio.h>

int main()
{
    // We check given number is positive or Negative 
    int num = -50;
    if(num>0){ // -50>0=f
        printf("Positive\n");
    }else{
        printf("Negative\n");
    }

    // Finding Even or Odd Number
    int evenNum = 58;
    if(evenNum % 2 == 0){ // 59%2 == 1 =>f
        printf("\n%d Even Number!\n", evenNum);
    }else{ //false
        printf("\n%d Odd Number!\n", evenNum);
    }

    // Finding Number are Equal or Not
    int num1;
    printf("Enter Num1 Value: ");
    scanf("%d", &num1);
    if(num1 == 50){
        printf("\nEqual Number!\n");
    }else{
        printf("\nUnequal Number!\n");
    }
    return 0;
}