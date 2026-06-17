#include<stdio.h>
//Pointer in string
int main(){

    char *str = "We miss you my learners!"; //pointer string 
    printf("String : %s\n", str);

    while(*str != '\0'){
        printf("%c ", *str);
        str++;
    }

    return 0;
}