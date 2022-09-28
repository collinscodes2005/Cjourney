#include<stdio.h>

#include<math.h>

void print_my_name(){
    printf("My name is collins \n");

}





int main(){




     print_my_name();



    double first;
    double second;
    double first_sqrt;
    double second_sqrt;
    double sum_sqrt;
    double answer;


    printf("Please Input the first Numbere : ");
    scanf("%lf", &first);
    first_sqrt = sqrt(first);

    printf("Please input the second number : ");
    scanf("%lf", &second);
    second_sqrt = sqrt(second);

    sum_sqrt = first_sqrt + second_sqrt;
    answer = sqrt(sum_sqrt);


    printf("The answer is %.2f", answer);






    
    }