#include<stdio.h>
int main(){
    //Variables to be declared//

    long long number;
    int amount;
    int thr
        //NETWORK ANB EITHER BE:
    // 1 REPRESENTS MTN
    //2 REPRESENTS GLO
    //3 REPRESENTS 9MOBILE
    //
    int network;
    char convertedNumber[11];

    //Telling user to input the phone number//
    printf("Enter the NETWORK  1 REPRESENTS MTN, \n 2 REPRESENTS GLO \n 3 REPRESENTS 9MOBILE :");
    //scanning the integer and storing it in the vae2
   //2 "number"//
    scanf("%d", &network);
    switch(network){

    case 1 :
        printf("Input the phone number you want to recharge : ");
        scanf("%lld", &number);
         //using the sprintf function to convert the phonenumber from integer to string//
        sprintf(convertedNumber, "%lld", number);

        if (convertedNumber[0] == '7' && convertedNumber[1] == '0' && convertedNumber[2] == '1'){

             printf("This number is an MTN number, how much do you want to recharge?");
             scanf("%d",  &amount);
             printf("you have successufully recharged %lld with %d", number, amount);
    }
        else{
            printf("Number is not an MTN number");
        }
        break;
     case 2 :
        printf("Input the phone number you want to recharge : ");
        scanf("%lld", &number);
         //using the sprintf function to convert the phonenumber from integer to string//
        sprintf(convertedNumber, "%lld", number);

        if (convertedNumber[0] == '8' && convertedNumber[1] == '1' && convertedNumber[2] == '5'){

             printf("This number is a glo number, how much do you want to recharge?");
             scanf("%d",  &amount);
             printf("you have successufully recharged %lld with %d", number, amount);
    }
        else{
            printf("Number is not a glo number");
        }
        break;
    case 3:
        printf("Input the phone number you want to recharge : ");
        scanf("%lld", &number);
         //using the sprintf function to convert the phonenumber from integer to string//
        sprintf(convertedNumber, "%lld", number);

        if (convertedNumber[0] == '8' && convertedNumber[1] == '0' && convertedNumber[2] == '2'){

             printf("This number is a 9MOBILE number, how much do you want to recharge?");
             scanf("%d",  &amount);
             printf("you have successufully recharged %lld with %d", number, amount);
    }
        else{
            printf("Number is not an 9MOBILE number");
        }
        break;
    default :
        printf("Invalid");
}

    for(i = 0; i<3; i++ ){

        threeDigits[] =threeDigits + convertedNumber[i];
    }
}