//strcpy() = one string copy in another string
//strcpy(str1, str2); = string copy
//strcpy(jaha copy krna hai, jise copy krna hai)

#include<stdio.h>
#include<string.h>

int main(){

    char str1[] = "Good Evening Students!";
    char str2[20];
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    strcpy(str2, str1);
    printf("Copied str2: %s\n", str2);
    return 0;
}