#include<stdio.h>
int main(){
    int counter = 1;
    int hours;
    double rate, pay;


    while (counter <= 5){
        printf("Enter the hours worked by employee %d : \n", counter);
        scanf("%d", &hours);
        printf("Enter the rate of employee %d : ", counter);
        scanf("%lf", &rate);

        pay = rate*hours;
        printf("the pay of employee %d is %f \n", counter, pay);
        
        
        counter = counter + 1;

    }

    printf("Employess pay roll has been processed ");

}