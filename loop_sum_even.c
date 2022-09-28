#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    int start;
    int stop;
    int sum = 0;
    printf("Input the startig point of count :  ");
    scanf("%d", &start);
    printf("Input the max number :  ");
    scanf("%d", &stop);
    for(i = start; i <= stop; i++)
    {
        //checking the condition for when i is even
        if (i % 2 == 0){
          //  printf("%d", i);
            sum = sum+ i;
        }
       else{
            printf("I dont know whats wrong, omo!!");
        } 
    }
    printf("The sum of all even numbers between %d and %d = %d", start, stop, sum );
    return 0;

}