

#include<stdio.h>

int main(){
    printf("Right angle triangle start pattern program: \n");
    int i, j;
    for(i = 1; i <= 3; i++){ // 1<=3=t, 2<=3=t, 3<=3=t, 4<=3=f
        for(j = 1; j <= i; j++){ // (1<=1=t, 2<=1=f), (1<=2=t, 2<=2=t, 3<=2=f), (1<=3=t, 2<=3=t, 3<=3=t, 4<=3=f)
            printf("* "); // *
                         //  * *
                         //  * * *
        }
        printf("\n");
    }


    /*
    Outer loop (i) runs from 1 to 3 → control number of rows.
    Inner loop (j) runs from 1 to i → control number of * printed in each row.
    So row 1 has 1 star, row 2 has 2, ..., row 3 has 3 star.

    *
    * *
    * * *
*/

printf("Right angle triangle number pattern program: \n");
    int a, b;

    for(a = 1; a <= 5; a++){ // 1<=5=t, 2<=5=t
        for(b = 1; b <= a; b++){ // (1<=1=t, 2<=1=f), (1<=2=t, 2<=2=t,2<=3=f)
            printf("%d ", b); // 1
                             //  1 2
        }
        printf("\n");
    }

    /*
    Similar structure to the star triangle.
    But instead of printing "* ", it prints the value of s.
    So each row prints increasing numbers starting from 1.
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

printf("Inverted Right angle triangle number pattern program: \n");
    int a1, b1;

    for(a1 = 5; a1 >= 1; a1--){ 
        for(b1 = 1; b1 <= a1; b1++){ 
            printf("%d ", b1); 
                            
        }
        printf("\n");
    }

    /*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    */

printf("Square start pattern program: \n");
    int x, y;
    for(x = 1; x <=7; x++){
        for(y = 1; y <= 8; y++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}