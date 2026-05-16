// use else if to specify a new condition to test, if the first condition is false.(Apply for Multiple Conditions)
// Syntax of else if ladder (ladder = steps)
/*
    if(condition1){ // f
    code
    }else if(condition2){ //f
    code
    }else if(condition3){
    code
    }else{
    code
    }
*/

#include<stdio.h>
int main(){
    int num = -30;
    if(num<0){ //20<0 =f // -30<0=t
        printf("Number is Negative!");
    }else if(num == 0){ // 20 == 0 =f
        printf("Number is Zero!");
    }else{
        printf("Number is Positive!");
    }

    //Student mark performance
    int mark;
    printf("\nEnter Student Mark: ");
    scanf("%d", &mark);

    if(mark >= 90 && mark <= 100){ // 34>=90=f && 34<=100=t => f&&t=f
        printf("Very Good!");
    }else if(mark >= 80 && mark <= 90){ // 34>=80=f && 34<=90=t => f&&t=f
        printf("Good!");
    }else if(mark >= 60 && mark <= 80){ // 34>=60=f && 34<=80=t => f&&t=f
        printf("Average!");
    }else if(mark >= 35 && mark <= 60){ //34>=35=f && 34<=60=t => f&&t=f
        printf("Pass!");
    }else{
        printf("Fail!");
    }

    return 0;
}

