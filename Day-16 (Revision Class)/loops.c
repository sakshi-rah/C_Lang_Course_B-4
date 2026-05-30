#include<stdio.h>

int main(){
    //Loops
    // for loop, while loop, dowhile loop
    printf("For Loop Program: \n");
    for(int i = 1; i <= 10; i++){
        printf("%d: Hello Student \n", i);
    }

    printf("While Loop Program: \n");
    int j = 1;
    while(j <= 5){
        printf("j: %d\n", j);
        j++;
    }

    printf("Do While Loop Program: \n");
    int k = 1;
    do{
        printf("Revision Class\n");
        k++;
    }while(k <= 4);


    
    printf("Nested Loop Square Pattern Program: \n");
    int a, b;
    int n;
    printf("Enter Value of n: ");
    scanf("%d", &n);

    for(a = 1; a <= n; a++){
        for(b = 1; b <= n; b++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}