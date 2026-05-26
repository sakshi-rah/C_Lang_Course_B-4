// strlwr() or tolower = string lowercase
// strupr() or toupper = string uppercase

#include<stdio.h>
#include<string.h>

int main(){

    char fullName[] = "SURYAKIRAN Chikhlonde";
    printf("Full Name : %s\n", fullName); //SURYAKIRAN

    strlwr(fullName);
    printf("Lowercase Full Name : %s\n", fullName); //suryakiran

    strupr(fullName);
    printf("Uppercase Full Name : %s\n", fullName); //SURYAKIRAN

    return 0;
}