// Conditional/Ternary Operator(if-else)
// Syntax: condition ? expression1 : expression2;
// expre1 = T, expre2 = F

// Finding the number is Even or Odd
#include<stdio.h>

int main(){
    int mark;
    printf("Enter Mark: ");
    scanf("%d", &mark);
    //ternery operator used
    (mark % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    //Finding Greater Number
    int a = 85, b = 60;
    int result = (a>b)? a : b ; //35>60 = F => expre2 (b=60)
    printf("Greater Number is %d.\n", result); // b=60

    //Finding Smaller Number
    int x = 10, y = 20;
    int min = (x<y)? x: y; // 10<20 = T (x=10)
    printf("Smaller Number id %d.\n", min); // x = 10
    return 0;
}