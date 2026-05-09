// 3. Assignment Operators (=,+=,-=,*=,/=,%=)
#include<stdio.h>

int main(){
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Value of x is %d\n", x); // x=10

    x += 3; // x = x+3;// x = 10 => 10+3 = 13
    printf("Value of x is %d\n", x); // x=13

    x -= 4; // x = x-4;// x = 13 => 13-4 = 9
    printf("Value of x is %d\n", x); // x=9

    x *= 2; // x = x*2;// x = 9 => 9*2 = 18
    printf("Value of x is %d\n", x); // x=18

    x /= 3; // x = x/3;// x = 18 => 18/3 = 6
    printf("Value of x is %d\n", x); // x=6

    x %= 5; // x = x%5;// x = 6 => 6%5 = 1
    printf("Value of x is %d\n", x); // x=1

    return 0;
}