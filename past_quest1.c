//switch case code to show various prices of mrs Alli's Good 

#include<stdio.h>
int main(){
    //declare choice variable
    int choice;
    //Collecting input from user 
    printf("welcome to Mrs Alli lace store \n");
    printf("Input 1 for grade A Lace \n");
    printf("Input 2 for grade B Lace \n");
    printf("Input 3 for grade C Lace\n");
    printf("Input 4 for grade D Lace\n");
    printf("Input 5 for grade E Lace\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("GRADE 1 LACE COSTS #100,000 NAIRA");
        break;


        case 2:
        printf("GRADE 2 LACE COSTS #250,000 NAIRA");
        break;

        case 3:
        printf("GRADE 3 LACE COSTS #380,000 NAIRA");
        break;

        case 4:
        printf("GRADE 4 LACE COSTS #500,000 NAIRA");
        break;

        case 5:
        printf("GRADE 5 LACE COSTS #620,000 NAIRA");
        break;

        default:
        printf("Please input a valid grade");

    }

}