// 5. Logical Operators (&&, ||, !)
#include<stdio.h>

int main(){

    printf("-------Logical Operators Program------\n");
    int m = 0, n = 1;
    // and(&&) => 0 0 => 0, 0 1 => 0, 1 0 => 0, 1 1 => 1
    // or(||) => 0 0 => 0, 0 1 => 1, 1 0 => 1, 1 1 => 1
    // not(!) => 0 => 1, 1 => 0

    printf("m && n: %d\n", m&&n); // 0 1 => 0
    printf("m || n: %d\n", m||n); // 0 1 => 1
    printf("!m: %d\n", !m); // 0 => 1
    printf("!n: %d\n", !n); // 1 => 0


    return 0;
}