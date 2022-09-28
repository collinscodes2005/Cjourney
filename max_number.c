#include<stdio.h>
#include<stdlib.h>
//Code to add two numbers together 
int main(){
//the two variables the user is to input
int a, b;
//variable 1 (a) collection
printf("Enter the first number: ");
scanf("%d", &a);
//variable 2 collection
printf("Input the second number: ");
scanf("%d", &b);
//if statement to determine if numbers are greter than each other 
if (a<b){
    printf("%d is greater than %d", b, a );

}
else if (a=b){
    printf("Numbers are equal");

}

else{
    printf("%d is greater than %d", a, b);
}


}