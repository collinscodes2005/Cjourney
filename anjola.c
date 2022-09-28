//program to execute password authentication
#include <stdio.h>

int main()
{
 int i; 
 int passcode=1234;
 int password;
 printf("Enter passcode: ");
 scanf("%d",&password);
 
 for(i=0;i<=3;i++)
 {
  if(password==passcode)
  {
   printf("\n Password Accepted:\n Welcome Aboard! ");
   break;
  }
  else
  {
   printf("\nWrong Password, Try again");
   printf("\nEnter passcode: ");
   scanf("%d",&password);
  }
  printf("\n 3 Attempts, Unauthorised User!");
 }
 
 return 0; 
}