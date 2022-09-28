#include<stdio.h>
#include<stdlib.h>
int main(){
int i;
printf("input the numbe: ");
scanf("%d", &i);
if (i % 2 == 0){
    printf("The number is even");
}
else{
    printf("the number is odd");
}
}
