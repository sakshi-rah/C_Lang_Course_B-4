/* Loops: In C programming, loops are used to execute a block of code repeatedly as 
long as a given condition is true. 
1) for loop
2) while loop
3) dowhile loop

1) for loop: Used when the number of iterations is known.

Syntax of for loop: 
for(initialization; condition; increment/decrement){
    // code to execute
}
*/

#include<stdio.h>

int main(){
    //print 1 to 10 numbers program using for loop

    // for(int i = 1; i<=10; i++){ //1<=10 = t i++ = 2, 2<=10 = t i++ = 3.... 10<=10=t i++ = 11, 11<=10=f
    //     printf("i: %d\n", i);
    // }

    // finding the number is even or odd 
    // int n;
    // printf("Enter Number: ");
    // scanf("%d", &n);

    // for(int i= 0; i<=n; i++){
    //     if(i%2 == 0){
    //         printf("Even: %d\n", i);
    //     }else{
    //         printf("Odd: %d\n", i);
    //     }
    // }

    //using continue(skip) and break(end) keyword
    for(int i = 1; i<=5; i++){
        if(i==3){
            continue;
        }
    }


    return 0;
}