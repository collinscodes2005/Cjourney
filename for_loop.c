#include<stdio.h>
#define SENTINEL -1
int main(){
    int hours;
    float rate, pay;

    for (int counter = 1; counter < 5; counter = counter + 1){
        printf("Enter the hours worked by employee %d : \n", counter);
        scanf("%d", &hours);
        printf("Enter the rate of employee %d : ", counter);
        scanf("%f", &rate);

        pay = rate*hours;
        printf("the pay of employee %d is %f \n", counter, pay);

        printf("_________________________________________________\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    }
    printf("Pay roll updated");

    return 0;


}
