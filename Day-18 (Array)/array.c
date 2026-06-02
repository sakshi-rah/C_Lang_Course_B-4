/* An array is a collection of variables of the same data type stored in contiguous memory
    locations. It allows you to store and access multiple values using a single variable name
    with an index.
    -indexing started from 0;
    -No. of array elements = size of array
    -index = array size-1;

    Syntax of Array in C.
    data_type array_name[array size];
*/

#include <stdio.h>

int main()
{

    // int marks[5]; // declaration of array (must added size of array)
    // int marks[] = {10, 20, 30, 40, 50, 60}; // declaration and initilization (optional added size of array)
    // printf("First Array Element: %d\n", marks[0]); // 10
    // printf("Second Array Element: %d\n", marks[1]); // 20
    // printf("Third Array Element: %d\n", marks[2]); // 30
    // printf("Fourth Array Element: %d\n", marks[3]); // 40
    // printf("Fifth Array Element: %d\n", marks[4]); // 50
    // printf("Sixth Array Element: %d\n", marks[5]); // 60

    //Array Printing using for loop
    // for(int i = 0; i < 6; i++){
    //     printf("Array Element [%d]: %d\n", i, marks[i]);
    // }

    //Getting array elements from user Program:
    printf("\n-------------Mini Project (Calculate Student Result)-------------\n");

    int marks[4];
    int sum = 0;
    float avg, per;

    printf("\nEnter Marks of 4 Subject: ");
    for(int i = 0; i < 4; i++){
        scanf("%d", &marks[i]);
    }

    printf("\n---------Display Student Result------\n\n");
    for(int i = 0; i < 4; i++){
        printf("Subject [%d]: %d\n", i+1, marks[i]);
        sum += marks[i]; // sum = sum +marks[i], 0+marks[0]= 0+10=10
        avg = sum/4.0;
        per = (sum/400.0)*100;
    }

    printf("\nSum of all subjects marks: %d\n", sum);
    printf("Average of all subjects: %.2f\n", avg);
    printf("Student Percentge: %.2f\n\n", per);


    return 0;
}
