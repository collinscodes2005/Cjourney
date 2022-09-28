#include<stdio.h>
int main(){
    int choice;
    printf("Enter 1 for balance check\n");
    printf("Enter 2 for withdrawal\n");
    printf("Enter 3 for transfer\n");
    printf("Enter 4 for customer care\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Your balance is 100$");
        break;
    case 2:
        printf("Welcome \n");
        int amount;
        printf("How much do you want to withdraw \n");
        scanf("%d", &amount);
        printf("............withdrawing\n");
        printf("SUccesully withdrawn");
        break;


    default:
        break;
    }
}
