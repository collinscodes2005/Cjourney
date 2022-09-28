#include<stdio.h>
#include<stdlib.h>
int main(){
int score;
printf("Enter the score: ");
scanf("%d", &score);
if (score >= 80 && score<= 100){
    printf("You have an A\n");
}
else if(score >= 60 && score <= 79){
    printf("You have a B\n");
}
else if(score >= 50 && score <= 59){
   printf("You have a C\n");
}
else if(score >= 40 && score <= 49){
    printf("You have a D\n");
}
else if(score >= 30 && score <= 39){
    printf("You have an E");
}
else{
    printf("You have a F");
}
}