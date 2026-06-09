// ** Category of user defined function:*

// 1.Function with no aug and no return value : void fun(){}; 
// 2.Function with aug and no return value : void fun(int a){};
// 3.Function with no aug and return value : int fun(){};
// 4.Function with aug and return value : int fun(float per, int b){};

#include<stdio.h>

// 1.Function with no aug and no return value : void fun(); 
void marks(){
    printf("Category one: \n");
}

// 2.Function with aug and no return value : void fun(int a){};
void sum(int a, int b){
    int add = a + b; // 8+4=12
    printf("Addition of a & b: %d\n", add); //12
}

// 3.Function with no aug and return value : int fun(){};
int getNum(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    return num;
}

// 4.Function with aug and return value : int fun(float per, int b){};
int multiNum(int x, int y){
    int multi = x*y;
    return multi;
}

int main(){
    marks();

    sum(8, 4);
    sum(12, 8);

    int value =  getNum();
    printf("Number is %d\n", value);

    int result = multiNum(5, 2);
    printf("Multification of x, y is %d\n", result); // 10
    printf("Multification of x, y is %d\n", multiNum(10, 5)); // 50


    return 0;
}