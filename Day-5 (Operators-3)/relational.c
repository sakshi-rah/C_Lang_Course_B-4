// 4. Relational Operators(<, <=, >, >=, ==, !=) => output in true(1) or false(0)

#include<stdio.h>

int main(){
    int p = 5, q = 6;

    printf("-----Relational Operators Program------\n");

    // int result = p < q;
    // printf("Result: %d\n", result); //1
    printf("p < q: %d\n", p<q); //5<6 = t = 1
    printf("p <= q: %d\n", p<=q); //5<=6 = t = 1
    printf("p > q: %d\n", p>q); //5>6 = f = 0
    printf("p >= q: %d\n", p>=q); //5>=6 = f = 0
    printf("p == q: %d\n", p==q); //5==6 = f = 0
    printf("p != q: %d\n", p!=q); //5!=6 = t = 1

    return 0;
}