#include<stdio.h>
#include<string.h>
int main(){
    char password[5];

   do{
       if(strlen(password) >4)
            printf("\nYou are to enter a four digit password\n");

        printf("Enter pin ?");
        scanf("%s",password);

    }while(strlen(password) >4);
    int e = strlen(password);
    printf("%d",e);
    printf("\n%s",password);
}