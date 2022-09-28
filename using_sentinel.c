#include<stdio.h>

#define SENTINEL -99


int main(){

    int sum = 0;
    int score;

    printf("Enter the score of the first student : ( Enter -99 to end) \n");
    scanf("%d", &score);

    do {
      
       sum = sum + score;
       printf("Enter the score of the next student : (Enter -99 to end ) \n");
       scanf("%d", &score);

    }

    while(score != SENTINEL);{
   
    printf("Total score of students processed \n");
    printf("%d", sum);
    }



}