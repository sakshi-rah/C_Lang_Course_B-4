// strcmp() = compare two string

#include<stdio.h>
#include<string.h>

int main(){
    //strcmp(1, 2) = string compare
    char color1[] = "Blue";
    char color2[] = "Gray";

    if(strcmp(color1, color2) == 0){
        printf("Simillar Color!\n");
    }else{
        printf("Different Color!\n");
    }

    char name1[] = "Piyush";
    char name2[] = "Sujal";

    if(strcmp(name1,  name2) == 0){
        printf("Same Name!\n");
    }else{
        printf("Different Name!\n");
    }
    return 0;
}