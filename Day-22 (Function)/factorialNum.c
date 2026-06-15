// 3. Factorial Number: 5! = 5*4*3*2*1 = 120 / 1*2*3*4*5 = 120


#include<stdio.h>

int factorial(int num){
    int fact = 1; // 1*1= 1, 1*2 = 2, 2*3 = 6, 6*4= 24, 24*5 = 120
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int result = factorial(4);
    printf("Factor of Number is %d\n", result);
    return 0;
}