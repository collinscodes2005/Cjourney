#include<stdio.h>
#include<stdlib.h>
int main(){
    int i ;
    //variable start is where the number would start summing from//
    int start ;
    //variable stop is where the number would stop 
    int stop;
    
    int sum = 0;

    printf("Input the startig point of count :  ");
    scanf("%d", &start);
    printf("Input the max number :  ");
    scanf("%d", &stop);
    for (i = start; i <= stop; i++)
    {
        sum = sum + i;
    }
    printf("The Sum of numbers from %d to %d is = %d", start, stop, sum);

    
    
    
    }