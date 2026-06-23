// _________ User Login System Mini Project __________

#include<stdio.h>
#include<string.h>

int main(){

    char userId[30], password[30];
    char loginId[30], loginPass[30];

    printf("\n-----****-----Create Your Account-----****-----\n\n");
    printf("Set User Id: ");
    scanf("%s", &userId);

    printf("Set Password: ");
    scanf("%s", &password);

    printf("\n-----****-----User Login-----****-----\n");
    printf("Enter User Id: ");
    scanf("%s", &loginId);

    printf("Enter User Password: ");
    scanf("%s", &loginPass);

    if(strcmp(userId, loginId) == 0 && strcmp(password, loginPass) == 0){
        printf("\nLogin Successfully! Welcome on this site, %s.\n\n", loginId);
    }else{
        printf("\nLogin Failed! Your user Id or Password is incorrect.\n\n");
    }

    return 0;
}