
#include<stdio.h>

int main(){
    //Finding Greater Number using conditional statement for two numbers
    // int num1, num2;
    // printf("Enter value of num1 and num2: ");
    // scanf("%d%d", &num1, &num2);

    // if(num1>num2){//15>13=t
    //     printf("Greater Number is %d.\n", num1);
    // }else{
    //     printf("Greater Number is %d.\n", num2);//50
    // }

    // //Finding Greater Number using conditional statement for two numbers
    // if(num1<num2){//15<13=f
    //     printf("Smallest Number is %d.\n", num1);
    // }else{
    //     printf("smallest Number is %d.\n", num2);//13
    // }

    //Finding Greater Number using conditional statement for three numbers
    int x, y, z;
    printf("Enter value of x, y, z: ");
    scanf("%d%d%d", &x,&y, &z); // x=4, y=7, z=9

    if(x>y && x>z){ // 4>7 && 4>9 = f
        printf("Greater Number is %d.\n", x);
    }else if(y>x && y>z){ // 7>4 && 7>9 = 1&&0 = 0
        printf("Greater Number is %d.\n", y);
    }else{
        printf("Greater Number is %d.\n", z); // z=9
    }

    return 0;
}