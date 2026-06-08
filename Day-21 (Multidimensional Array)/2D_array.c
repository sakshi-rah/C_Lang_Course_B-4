// Multidiamensional Array = 2D array
// Syntax: data_type array_name[size(row)][size(col)]; i=row, j=col

#include<stdio.h>

int main(){

    //Declaration of multiddimensional array
    int twoArray[2][3] = {
        {1, 2, 3}, 
        {4, 5, 6}
    };

    //printing array elements: (nested for loop)
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", twoArray[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");
    //Print Marks of Each Student:
    int marks[4][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 80, 70, 60},
        {50, 40, 30, 20}
    };

    printf("Student Marks (4 Students, 4 Subjects): \n\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");

    //Calculate Average of marks of each student: 
    for(int i = 0; i < 4; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            sum += marks[i][j];
        }
        float avg = sum/4.00;
        printf("Average of Student %d: %.2f\n", i+1, avg);
    }
    return 0;
}

