// Print Reverse Array Elements:

#include <stdio.h>

int main()
{
    // int number[] = {5, 10, 15, 20, 25};

    // printf("Reverse Array Elements Program: \n");
    // int i;
    // for(i = 4; i >= 0; i--){
    //     printf("%d ", number[i]); // 25 20 15 10 5
    // }

    // Print Reverse Array Elements size and values taking from user
    int size;
    printf("Enter Array Size: ");
    scanf("%d", &size);

    int arrUser[size];
    printf("Enter Array Element: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arrUser[i]);
    }

    for(int i = size-1; i >= 0; i--){
        printf("%d ", arrUser[i]);
    }


    return 0;
}