#include<stdio.h>
#include<stdlib.h>
int main(){
    int selection;
    printf("Welcome to KUDA bank\n");
    printf("Press 1 for Instant Withdrawal\n"); 
    printf("Press 2 for Change Pin\n");
    printf("Press 3 for Transfer\n");
    scanf("%d", &selection);
    
    int withdrawal_Cost;
    switch (selection)
    {
    case 1:
          
          printf("How much do you want to withdraw? ");
          scanf("%d", &withdrawal_Cost);
          int atm_Pin = 1234;
          int inputed_ATM_pin;
          printf("Please input your pin : \n");
          scanf("%d", &inputed_ATM_pin);
          if (inputed_ATM_pin = atm_Pin){
                printf("You have succesfully withdrawn %d , Thanks for using KUDA bank", withdrawal_Cost);
          }  
          else{
              printf("Your pin is incorrect");
          }

          
        /* code */
        break;
    case 2:
          printf("Welcome to KUDA bank\n");
          int previous_pin = 1234;
          int input;
          int new_pin;
          printf("Input your previous pin: ");
          scanf("%d", &input);
          if (input = previous_pin){
              printf("Enter the new PIN : ");
              scanf("%d", &new_pin);
              printf("You have successfully changed your pin from %d to %d", previous_pin, new_pin);

          }
          else{
              printf("Invalid details");
          }
          break;
    case 3:
        printf("welcome to kuda");
        int account;
        int amount;
        char bank[20];
        printf("Welcome to KUDA bank\n");
        printf("Enter the account details of the recipient\n");
        printf("enter the account number : ");
        scanf("%d", &account);
        printf("Enter the amount you want to transfer : ");
        scanf("%d", &amount);
        if (amount > 100000){
            printf("Insufficient balance");
        }
        else{
            printf("TRANSFER SUCCESSFUL\n");
            printf("You have succesfully withdrawn %d to %d", amount, account);
        }

    default:
        break;
    }
     
    
    

}