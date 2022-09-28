#include<stdio.h>
#include<math.h>

//define your constant pi = 3.142

//#define PIE 3.142


//let b be the radius of the circle
// formular for calculation of the circumcference of a circle is 2 x radius x PIE

//create functions that collects the radius of the circle

//val of pi
float const pi = 3.142;


float circumference(float b, float pi);

//float area(int b)

int main(){
    float b;
    printf("Input the value of the radius of the circle :  ");
    scanf("%f", &b);

    printf("The circumference is %f", circumference(b ,pi));

}

//function that finds the circumference of the circle
float circumference(float b, float pi){
    float val;
    val = b * b * pi;
    return val;




}
