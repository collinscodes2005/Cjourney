#include<stdio.h>
#include<stdlib.h>
int main(){
    float score[10];

    float total = 0 , average = 0;
    for (int i = 0; i < 10 ; i++){
        int student = i + 1;
        printf("Enter the score for %d\n", student);
        scanf("%f", &score[i]);

        total = total + score[i];
        average = total / 10;



    } 
    printf("Total score is %f\n", total);
    

    printf("The average score of the studnts is %f\n",average);


   printf ("fluckite");

