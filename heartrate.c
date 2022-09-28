#include<stdio.h>
#include<stdlib.h>
int  main(){
   float heart_rate;
   printf("Please Input your heart rate: ");
   scanf("%f", &heart_rate);

   if (heart_rate > 75){
       printf("Please see your doctor");
   }
   else{
       printf("Youre doing well");
   }

}