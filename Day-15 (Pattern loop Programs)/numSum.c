// Sum of Number from 1 to 10 => 1+2+3+4+5+6+7+8+9+10 = 55
#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter Number: ");
    scanf("%d", &n); // n=5

    for(int i = 1; i <= n; i++){ //1<=5 = t, 2<=5 = t, 3<=5=t, 4<=5=t, 5<=5=t, 6<=5=f
        printf("%d ", i); // 1 2 3 4 5
        sum += i; //sum = sum + i; sum = 0+1=1, sum=1+2=3, sum=3+3=6, sum=6+4=10, sum=10+5=15
    }
    printf("\nSum of Numbers is %d\n", sum);

    return 0;
}
