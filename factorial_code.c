#include<stdio.h>
#include<stdlib.h>
//initialize the int ason variable /


int main(){
  /*Declare 3 variables
    i = the number we would be incrmenting 
    f = the number would continue to multiple
    */
  int i,f=1,num;
 
  printf("Enter a number: ");
  scanf("%d",&num);
 
  for(i=1;i<=num;i++)
      f=f*i;
 
  printf("Factorial of %d is: %d",num,f);
  return 0;
}
