// first consider min number of array_name[index(0)] index.


#include <stdio.h>

int main()
{
    // Minimum Number Finding from Given Array
    int arr[] = {56, 85, 60, 40, 200};

    int min = arr[0]; // min = 56
    for(int i = 0; i < 5; i++){ //i=1, i=2
        if(arr[i] < min){ // arr[0] < 56 => 56<56=f, arr[1] < 56 => 85 < 56=f, arr[2] <56 => 6<56=t
            min = arr[i]; // min = arr[2] => min = 6
        }
    }
    printf("Minimum Number: %d\n", min);


     // Maximum Number Finding from Given Array

    int max = arr[0]; 
    for(int i = 0; i < 5; i++){ 
        if(arr[i] > min){ 
            max = arr[i]; 
        }
    }
    printf("Maximum Number: %d\n", max);
    return 0;
}