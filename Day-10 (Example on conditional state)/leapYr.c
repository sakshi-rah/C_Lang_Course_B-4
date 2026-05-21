/*Leap Year 366 days 29th feb
1. year divided by 4 is called leap yr.
2. year divide by 400 is also leap yr.
3. year divided by 100 is not a leap yr but if year divided by 400 or 4 then this yr.
will be leap yr.
*/

#include<stdio.h>

int main(){

    // int year;
    // printf("Enter Year: ");
    // scanf("%d", &year);

    // if(year%4 == 0){
    //     printf("%d is a leap year!", year);
    // }else if(year%400 == 0){
    //     printf("%d is a leap year!", year);
    // }else if(year%100 == 0){
    //     printf("%d is not a leap year!", year);
    // }else{
    //     printf("%d is not a leap year!", year);
    // }


    //Finding Vowels and Consonant (Vowels = a, e, i, o, u)
    char ch = 'X';
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("%c is Volwel\n", ch);
    }else{
        printf("%c is Consonant\n", ch);
    }
    return 0;
}