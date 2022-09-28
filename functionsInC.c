#include<stdio.h>
int max(int a , int b){
    if (a > b) return a;
    else if (a < b) return b;
    else return a;

}


int main(){
    int x, y;
    int maximum;


    printf("Enter the first value : \n");
    scanf("%d", &x);

    printf("Enter the second value : \n");
    scanf("%d", &y);

    maximum = max(x, y);

    printf("The maximum value is %d", maximum);


}