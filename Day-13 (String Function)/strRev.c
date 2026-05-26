// strrev() = string reverse
//'\0' = null character in string it means you given string is ended here (place in always last)
#include<stdio.h>
#include<string.h>

int main(){
    char name[] = "Disha Thate";
    printf("Name: %s\n", name); //Disha Thate
    strrev(name);
    printf("Reverse Name: %s\n", name); // etahT ahsiD

    //Find string length without using string handling function [strlen()]
    char greeting[] = "Good Evening, How are you!";

    int len = 0;
    for(int i = 0; greeting[i]!='\0'; i++){
        len++;
    }
    printf("Length: %d\n", len);

    // find string reverse without using strrev() function.
        for(int i = len-1; i>=0; i--){
            printf("%c", greeting[i]);
        }
    return 0;
}