#include <stdio.h>

int main(){
    int x;
    x = 123;
    int y = 321;

    int age = 11101;
    float gpa = 2.05;
    char grade = 'C';
    char name[] = "Alicia- more than 1 character"; //array of characters
    // format specifier
    /*
    %d - decimal
    %s - string
    */
    printf("hi %s\n", name);
     printf("You are %d\n", age);
     printf("you average grade is %c\n", grade);
     printf("your gpa is %0.2f\n", gpa);
     printf("your gpa is %1.2f\n", gpa);
     printf("your gpa is %2.2f\n", gpa);
     printf("your gpa is %2.3f\n", gpa);
     printf("your gpa is %f\n", gpa);
     
    return 0;
}