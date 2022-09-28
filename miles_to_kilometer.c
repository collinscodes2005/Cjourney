#include<stdio.h>
#include<stdlib.h>
/*
this program convert distance in miles to distance in kilometers 
note that 2.5 miles is equal to 1 kilometer 
*/
int main(){
    double miles, km;
    const double constant = 2.5;
    printf("Input the distance in miles : ");
    scanf("%lf", &miles);
    
    km = miles*constant;
    printf("The distance in kilometers is : %f km", km);

