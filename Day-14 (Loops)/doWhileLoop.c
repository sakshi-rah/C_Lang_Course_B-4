/* 3) do...while loop: Executes the block at least once, then checks the condition.
initialization
do{
    // code to execute
    // ince or dec;
}while(condition);
*/

#include<stdio.h>

int main(){
    int b = 1;
    do{
        printf("b: %d ", b);// b: 1, b:2
        b++; // b=2, b=3
    }while(b<=5);//1<=5

    int c = 10;
    do{
        printf("c: %d ", c); // c:10
        c++; // c=11
    }while(c<=5);// 10<=5 = f
    return 0;
}