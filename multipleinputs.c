#include <stdio.h>
 
 
int main()
{
  int studentCount, marksSum=0, average=0, inputMarks;
  printf("Enter the marks of 10 students:");
  for(studentCount = 0; studentCount <= 10; studentCount++)
  {
    scanf("%d", &inputMarks);
    marksSum += inputMarks;
    
  } 

  average = marksSum / 10;
  printf("Average Marks: %d, total sum: %d", average, marksSum);
}