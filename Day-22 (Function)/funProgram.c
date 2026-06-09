// 3. Factorial Number: 5 = 5*4*3*2*1 = 120
// 4. Check Number Even or Odd = HW

#include<stdio.h>
// 1. Add two numbers using function(taking input from user)
// int add(int s, int r){
//     // int sum = s + r;
//     // return sum;
//     return s+r;
// }

// int main(){
//     int num1, num2;
//     printf("Enter num1: ");
//     scanf("%d", &num1); // num1 = 5

//     printf("Enter num2: ");
//     scanf("%d", &num2); // num2 = 15

//     int result = add(num1, num2); // add(5, 15) => s=5, r=15
//     printf("Addition of s & r : %d\n", result);

//     return 0;
// }


#include<stdio.h>
// 2. Check whether a number is prime or not using function()
int isPrime(int num){
    if(num <= 1){
        return 0; // not prime number
    }

    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            return 0; // Even = not prime number
        }
    }
    return 1; // prime number
}


int main(){

    int number;
    printf("Enter Num Value: ");
    scanf("%d", &number);

    if(isPrime(number)){
        printf("%d is a prime number!", number);
    }else{
        printf("%d is not a prime number!", number);
    }

    return 0;
}

