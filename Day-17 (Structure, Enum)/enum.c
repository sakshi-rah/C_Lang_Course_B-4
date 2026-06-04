// Syntax of Enumerator: enum keyword
/*
enum variable_name {value1, value2, value3.....};
Enum: Groups name constants(integers)
*/

#include<stdio.h>

enum Day {Sun, Mon, Tue, Wed, Thur, Fri, Sat};
enum Signal {Red, Yellow, Green};


int main(){
    enum Day today = Sat;
    printf("Today is %d\n", today);

    enum Signal sig = Yellow;

    if(sig == Green){
        printf("Go!\n");
    }else if(sig == Yellow){
        printf("Go Slow!\n");
    }else{
        printf("Stop!\n");
    }

    return 0;
}