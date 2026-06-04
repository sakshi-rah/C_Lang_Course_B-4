//Array Sorting in ascending or descending order

#include<stdio.h>

int main()
{
    int arr[] = {63, 36, 39, 93, 27, 54};
    //unsorted array 63, 36, 39, 93, 27, 54
    int temp;
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            if(arr[j] > arr[j+1]){ // descending arr[j] < arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted Array in Ascending Order: ");
    for(int i=0; i<7; i++){
        printf("%d ", arr[i]);
    }

    return 0;   
}
