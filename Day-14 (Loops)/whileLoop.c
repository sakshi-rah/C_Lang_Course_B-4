/* 2) while loop: Used when the number of iterations is not known.
//initialization;
while(condition){
    // code to execute
    //increment;
} */

#include<stdio.h>

int main(){
    int i = 1;
    while(i<=10){ //1<=10=t, 2<=10=t.... 11<=10=f
        printf("i: %d\n", i); //i: 1, i: 2
        i++; // i = 2, i =3
    }

    printf("\n\n");

    //Printing Reverse Number
    int j = 5;
    while(j>=1){ //5>=1=t, 4>=1=t, 3>=1=t, 0>=1=f
        printf("j: %d\n", j); //j: 5, j: 4, j: 3
        j--; //j = 4, j = 3, j: 2
    }

    //Taking input from the user
    int a = 1, n;
    printf("Enter Value of n: ");
    scanf("%d", &n);

    while(a<=n){ 
        printf("a: %d\n", a); 
        a++; 
    }
    return 0;
}