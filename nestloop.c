// include the library for printing to screen
#include<stdio.h>  
#define SENTINEL -99
 
 // all programs must have a main function
int main(){
	int sum = 0;
	int score;
	
	printf("Enter the score of the first student: (Enter -99 to end) \n");
	scanf("%d", &score);
	
	while(score != SENTINEL){
		sum = sum + score;
		
		printf("Enter the score of the next student: (Enter -99 to end) \n");
		scanf("%d", &score);
	}
	
	printf("Processed all student's score\n");
	printf("The sum of all scores is %d ", sum);
}