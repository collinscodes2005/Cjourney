#include<stdio.h>
#include<stdlib.h>
int main(){
    int global_student;
    int student_1;
    int student_2;
    int student_3;

    printf("Welcome to the school portal : \n");
    printf("Please input your password");
    scanf("%d", &global_student);

    if(global_student == 1234){
        printf("The password inputed is for student 1");
    }
    else if(global_student == 0000){
        printf("Password inputed is for student 2");
    }
    else if(global_student == 1111){
        printf("Password inputed is for student 3");
    
    }
    else{
        printf("Invalid password, please try again..");
    }

}
