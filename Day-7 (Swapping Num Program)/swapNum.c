#include<stdio.h>

int main(){
    //Swapping Number with using Third Variable
    int a = 12, b = 24;
    printf("a:%d, b:%d\n", a, b);
    int temp;
    temp = a; // temp = 12
    a = b; // a = 24
    b = temp; // b = 12
    printf("a:%d, b:%d\n\n", a, b);

    //Swapping Number without using Third Variable
    int x = 10, y = 30;
    printf("x = %d, y = %d\n", x, y);
    x = x + y; // x = 10+30 = 40
    y = x - y; // y = 40-30 = 10
    x = x - y; // x = 40-10 = 30
    printf("x = %d, y = %d\n", x, y);

    return 0;
}