#include<stdio.h>
//Pointer in Function

// void uptValue(int *num){
//     *num = *num + 10;  // *num = 5 + 10 = 15 => *num = 15
//     // *num += 10;
// }

// int main(){
//     int number = 50;
//     uptValue(&number);
//     printf("Updated Value of num: %d\n", number);

//     return 0;
// }

int swapNum(int *a, int *b){ // a=25, b=35
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int x = 25, y = 35; // x=a, y=b
    swapNum(&x, &y);
    printf("After Swapping Value of x & y is x = %d, y = %d.\n", x, y); //x=35, y=25
    return 0;
}