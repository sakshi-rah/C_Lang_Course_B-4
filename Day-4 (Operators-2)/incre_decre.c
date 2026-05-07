// increment and decrement operators(++, --) inc by 1 or dec by 1
/* pre increment (++x) // write ++ operator before variable(x)
pre decrement (--x) // write -- operator before variable(x)
post increment (x++) // write ++ operator after variable(x)
post decrement(x--) // write -- operator after variable(x)

pre inc => 1st perform operation then print inc or dec value (++x: 12 ) //x=11
post inc => print 1st given value then perform operation x=10, (x++: 10) memory= 11, x=11 
*/

#include<stdio.h>

int main(){
    int x = 7;
    printf("x: %d\n", x); // x:7
    //Pre Increment and Decrement operators
    printf("++x: %d\n", ++x); //++x: 8
    printf("x: %d\n", x); // x:8
    printf("--x: %d\n", --x); // --x:7
    printf("x: %d\n", x); // x:7

    int y = 5;
    printf("y: %d\n", y); // y:5
    //Pre Increment and Decrement operators
    printf("++y: %d\n", ++y); //++y: 6
    printf("y: %d\n", y); //y:6
    printf("--y: %d\n", --y); //--y:5
    printf("y: %d\n", y); // y:5

    //Post Increment and Decrement operators
    int a = 10;
    printf("a++: %d\n", a++);//a++: 10 (memory a = 11)
    printf("a: %d\n", a); // a:11
    printf("a++: %d\n", a++); // a++: 11 (memory a = 12)
    printf("a: %d\n", a); // a:12
    printf("a--: %d\n", a--); // a--: 12 (memory a = 11)
    printf("a: %d\n", a); // a:11

    return 0;
}