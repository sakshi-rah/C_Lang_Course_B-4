//2. strcat() = Two String Join(Combine)
#include<stdio.h>
#include<string.h>

int main(){
    //2. String Concatenate strcat();
    char F_Name[20];
    printf("Enter First Name: ");
    scanf("%s", &F_Name);

    char L_Name[20];
    printf("Enter Last Name: ");
    scanf("%s", &L_Name);

    printf("First Name: %s\n", F_Name);
    printf("Last Name: %s\n", L_Name);

    // strcat(F_Name, " ");
    // strcat(F_Name, L_Name);
    // printf("Full Name: %s\n", F_Name);

    strcat(L_Name, " ");
    strcat(L_Name, F_Name);
    printf("Full Name: %s\n", L_Name);
    return 0;
}
