// Practical 1 - Calculate the average of marks of 5 subjects

#include <stdio.h>

int main(){
    int Sub1,Sub2,Sub3,Sub4,Sub5;
    printf("Enter the Marks of Sub1, Sub2, Sub3, Sub4 and Sub5 respectively : ");
    scanf("%d %d %d %d %d",&Sub1,&Sub2,&Sub3,&Sub4,&Sub5);
    float avg = ((float) Sub1 + Sub2 + Sub3 + Sub4 + Sub5)/5;     // Doing typecasting as it is doing integer division
    printf("The average value of marks of 5 subjects are : %.2f",avg);   //%.2f for making result in 2 decimal places
    return 0;
}