#include<stdio.h>
#include<string.h>
int main(){
    char password[5];

     printf("Enter pin ?");
     scanf("%s",password);

   int e = strlen(password);
    printf("%d",e);

    while( e>4){

            printf("\nYou are to enter a four digit password\n");
            printf("Enter pin ?");
            scanf("%s",password);

  }
      printf("\n%s",password);
}
